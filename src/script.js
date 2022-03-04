/*******************************************/
/* 1. DEFINE VARIABLES
/*******************************************/

var notes = []; // all notes stored
var id = 1;
var temp_id = null; // to store id who whill updated!

var alertPlaceholder = document.getElementById('liveAlertPlaceholder')

/*******************************************/
/* 2. DOCUMENT SELECTORS
/*******************************************/
var _gui = {
	noteTitle: document.querySelector("#title_Input"), // INPUT TITLE TAG
	noteContent: document.querySelector("#content_Input"), // INPUT CONTENT TAG
	notesList: document.querySelector(".notes_List"), // TABLE TAG
	update: document.querySelector("#btn_Update"), // UPDATE BUTTON
    submit: document.querySelector("#btn_Save"), // SAVE BUTTON
    clear: document.querySelector("#btn_Clear") //DELETE BUTTON
}

/*******************************************/
/* 3. EVENT LISTENER
/*******************************************/
_gui.submit.addEventListener("click", () => {
	if(_gui.noteTitle.value == "" || _gui.noteContent.value == "") {
		alert('Preencha todos os campos obrigatórios para salvar uma nota!', 'warning')
		return
	}
    
	saveNote(_gui.noteTitle.value, _gui.noteContent.value);
});

_gui.update.addEventListener("click", () => {
	updateNote();
});

_gui.clear.addEventListener("click", () => {
	clearInputs();
});

/*******************************************/
/* 4. FUNCTIONS
/*******************************************/

/*******************************************/
/* 4.1 EDIT MODE
/*******************************************/

const disableEditMode = () => {
	temp_id = 0;
	_gui.update.disabled = true;
	_gui.submit.disabled = false;

}

const enableEditMode = (id) => {
	
	for(let i = 0; i < notes.length; i++) {
		if (notes[i].id == id) {
			_gui.noteTitle.value = notes[i].title;
			_gui.noteContent.value = notes[i].content;
			temp_id = id;
			_gui.update.disabled = false;
			_gui.submit.disabled = true;

		}

	}

}

/*******************************************/
/* 4.2 PRINT
/*******************************************/

const printNotes = () => {

	_gui.notesList.innerText = "";

	for (let i = 0; i < notes.length; i++) {
		// tr(Row), td(Column)
		let tr = _gui.notesList.insertRow();
		let td_id = tr.insertCell();
		let td_title = tr.insertCell();
		let td_content = tr.insertCell();
		let td_actions = tr.insertCell();
		td_id.innerHTML = notes[i].id;
		td_title.innerHTML = notes[i].title;
		td_content.innerHTML = notes[i].content;
		
		// Create and Give Action for Edit Button
		let editBtn = document.createElement('img');
		editBtn.src = "https://icons.iconarchive.com/icons/icons8/windows-8/256/Files-Edit-File-icon.png"
		editBtn.setAttribute("onclick", "enableEditMode("+ notes[i].id +")");
		editBtn.classList.add("action_Buttons");

		// Create and Give Action for Delete Button
		let deleteBtn = document.createElement('img');
		deleteBtn.src = "https://icons.iconarchive.com/icons/hopstarter/sleek-xp-software/256/Windows-Close-Program-icon.png"
		deleteBtn.setAttribute("onclick", "deleteNote("+ notes[i].id +")");
		deleteBtn.classList.add("action_Buttons");

		td_actions.appendChild(editBtn); // insert img inside a td TAG!
		td_actions.appendChild(deleteBtn); // insert img inside a td TAG!
	}

}

/*******************************************/
/* 4.3 UPDATE, DELETE, SAVE
/*******************************************/

const updateNote = () => {

	for(let i = 0; i < notes.length; i++) {
		if (temp_id == notes[i].id) {
			notes[i].title = _gui.noteTitle.value;
			notes[i].content = _gui.noteContent.value;
			disableEditMode();
			printNotes();
			clearInputs();
			alert('A nota foi atualizada com sucesso!', 'success')
		}
	}
}

const deleteNote = (id) => {

	for(let i = 0; i < notes.length; i++) {
		if (notes[i].id == id) {
			notes.splice(i, 1);
			_gui.notesList.deleteRow(i);
			alert('A nota foi excluída com sucesso!', 'success')
		}

	}

}

const saveNote = (titleValue, contentValue) => {

	const dataObject = { 
		id: id,
		title: titleValue, 
		content: contentValue
	};
	notes.push(dataObject);
	id++;
	printNotes();
	clearInputs();

}

/*******************************************/
/* 4.3 OTHERS
/*******************************************/

const clearInputs = () => {
	_gui.noteTitle.value = "";
	_gui.noteContent.value = "";
	_gui.noteTitle.focus();
}

var alert = (message, type) => { // By Bootstrap
	var wrapper = document.createElement('div');
	wrapper.innerHTML = '<div class="alert alert-' + type + ' alert-dismissible fade show" role="alert" >' + message + '<button type="button" class="btn-close" data-dismiss="alert" aria-label="Close"></button></div>';
	alertPlaceholder.append(wrapper);
}

/*******************************************/
/* 5. STARTING DEFAULT DATA
/*******************************************/

const defaultData = {
	title: "Enviar Aplicação para a Plano",
	content: "Aplicação desenvolvida com sucesso!"
}
saveNote(defaultData.title, defaultData.content);
