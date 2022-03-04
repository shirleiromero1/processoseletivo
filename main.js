'use strict'

const openModal = () => document.getElementById('modal')
    .classList.add('active')

const closeModal = () => {
    clearFields()
    document.getElementById('modal').classList.remove('active')
}


const getLocalStorage = () => JSON.parse(localStorage.getItem('db_nota')) ?? []
const setLocalStorage = (dbnota) => localStorage.setItem("db_nota", JSON.stringify(dbnota))

// CRUD - create read update delete
const deletenota = (index) => {
    const dbnota = readnota()
    dbnota.splice(index, 1)
    setLocalStorage(dbnota)
}

const updatenota = (index, nota) => {
    const dbnota = readnota()
    dbnota[index] = nota
    setLocalStorage(dbnota)
}

const readnota = () => getLocalStorage()

const createnota = (nota) => {
    const dbnota = getLocalStorage()
    dbnota.push (nota)
    setLocalStorage(dbnota)
}

const isValidFields = () => {
    return document.getElementById('form').reportValidity()
}

//Interação com o layout

const clearFields = () => {
    const fields = document.querySelectorAll('.modal-field')
    fields.forEach(field => field.value = "")
    document.getElementById('titulo').dataset.index = 'new'
}

const savenota = () => {
    debugger
    if (isValidFields()) {
        const nota = {
            titulo: document.getElementById('titulo').value,
            text: document.getElementById('text').value,
           
        }
        const index = document.getElementById('titulo').dataset.index
        if (index == 'new') {
            createnota(nota)
            updateTable()
            closeModal()
        } else {
            updatenota(index, nota)
            updateTable()
            closeModal()
        }
    }
}

const createRow = (nota, index) => {
    const newRow = document.createElement('tr')
    newRow.innerHTML = `
        <td>${nota.titulo}</td>
        <td>${nota.text}</td>
        <td>
            <button type="button" class="button green" id="edit-${index}">Editar</button>
            <button type="button" class="button red" id="delete-${index}" >Excluir</button>
        </td>
    `
    document.querySelector('#tablenota>tbody').appendChild(newRow)
}

const clearTable = () => {
    const rows = document.querySelectorAll('#tablenota>tbody tr')
    rows.forEach(row => row.parentNode.removeChild(row))
}

const updateTable = () => {
    const dbnota = readnota()
    clearTable()
    dbnota.forEach(createRow)
}

const fillFields = (nota) => {
    document.getElementById('titulo').value = nota.titulo
    document.getElementById('text').value = nota.text
    document.getElementById('titulo').dataset.index = nota.index
}

const editnota = (index) => {
    const nota = readnota()[index]
    nota.index = index
    fillFields(nota)
    openModal()
}

const editDelete = (event) => {
    if (event.target.type == 'button') {

        const [action, index] = event.target.id.split('-')

        if (action == 'edit') {
            editnota(index)
        } else {
            const nota = readnota()[index]
            const response = confirm(`Deseja realmente excluir esta nota ${nota.titulo}`)
            if (response) {
                deletenota(index)
                updateTable()
            }
        }
    }
}

updateTable()

// Eventos
document.getElementById('cadastrarnota')
    .addEventListener('click', openModal)

document.getElementById('modalClose')
    .addEventListener('click', closeModal)

document.getElementById('salvar')
    .addEventListener('click', savenota)

document.querySelector('#tablenota>tbody')
    .addEventListener('click', editDelete)

document.getElementById('cancelar')
    .addEventListener('click', closeModal)