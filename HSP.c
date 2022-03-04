#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#include <time.h>

#define a_atual 2022;

int main()
{
	system("color 3f");
	setlocale (LC_ALL,"portuguese");
	
	int menu=0;
	int mudar;
  
    ///    VARIAVEIS
    int idade=0, dia=0, ano=0, mes=0, celular=0, sangue=0;
    char nome[100], sobrenome[100], sexo[100], cidade[100], estado[100], endereco[100], email[100], alergia[100];
	
    while(menu!=5){
        printf("\n       IIII");
		printf("\n       IIII");
		printf("\n   IIIIIIIIIIII");
		printf("\n  IIIIIIIIIIIIII");          ///lOGO DO HOSPITAL E NOME
		printf("\n   IIIIIIIIIIII");
		printf("\n       IIII");
		printf("\n\n     HOSPITAL");
		printf("\n      IBIRA");
		printf("\n\n............................");
		printf("\t\n1-CADASTRAR");
		printf("\t\n2-VISUALIZAR");
		printf("\t\n3-SOBRE");
		printf("\t\n4-APAGAR");
		printf("\t\n5-SAIR");
		printf("\n............................");
		printf("\n\nESCOLHA UM NUMERO PARA PROSSEGUIR: ");
		scanf("%d", &menu);
        switch(menu){
			
            case 1:
            {
                //CADASTRO
                
                printf("\n======================");
                printf("\n====DADOS PESSOAIS====");
                printf("\n\nPRIMEIRO NOME: ");
                scanf("%s", nome);
                fflush(stdin);
                printf("\nSOBRENOME: ");
                scanf("%s", sobrenome);
                fflush(stdin);
                printf("\nINFORME SEU SEXO: ");
                scanf("%s", sexo);
                fflush(stdin);
                printf("\n======================");
                printf("\n==DATA DE NASCIMENTO==");
                printf("\n\nINFORME O DIA: ");
                scanf("%d", &dia);
                fflush(stdin);
                printf("\nINFORME O MES: ");
                scanf("%d", &mes);
                fflush(stdin);
                printf("\nINFORME O ANO: ");
                scanf("%d", &ano);
                fflush(stdin);
                idade=2022-ano;
                printf("\n\nIdade: %d",idade);
                fflush(stdin);
                
                
                
                
                printf("\n======================");
                printf("\n\n======================");
                printf("\n==ENDERECO E CONTATO==");
                
                printf("\n\nINFORME SEU TELEFONE: ");
                scanf("%d", &celular);
                fflush(stdin);
                printf("\n\nINFORME SEU ENDERECO: ");
                scanf("%s", endereco);
                fflush(stdin);
                printf("\n\nINFORME SEU EMAIL: ");
                scanf("%s", email);
                fflush(stdin);
                printf("\n\nINFORME SEU ESTADO: ");
                scanf("%s", estado);
                fflush(stdin);
                printf("\n\nINFORME SUA CIDADE: ");
                scanf("%s", cidade);
                fflush(stdin);
                
                printf("\n======================");
                printf("\n\n======================");
                printf("\n==INFORMACOES MEDICAS==");
                printf("\nDentre as opcoes abaixo, qual seu TIPO SANGUINEO: ");
                printf("\n\n1.[A+] 2.[A-] 3.[B+] 4.[B-] 5.[O+] 6.[O-] 7.[AB+] 8.[AB-]");
                scanf("%d", &sangue);
                fflush(stdin);
                
                if(sangue==1){
                    printf("Sangue tipo A positivo");
                }
                else if(sangue==2){
                    printf("Sangue tipo A negativo");
                }
                else if(sangue==3){
                    printf("Sangue tipo B positivo");
                }
                else if(sangue==4){
                    printf("Sangue tipo B negativo");
                }
                else if(sangue==5){
                    printf("Sangue tipo O positivo");
                }
                else if(sangue==6){
                    printf("Sangue tipo O negativo");
                }
                else if(sangue==7){
                    printf("Sangue tipo AB positivo");
                }
                else if(sangue==8){
                    printf("Sangue tipo AB negativo");
                }
                printf("\n\nVoce e alergico a algum medicamento ? (Se sim informe) ");
                scanf("%s", alergia);
                fflush(stdin);
                
                printf("\t\nCADASTRO REALIZADO COM SUCESSO!");
                system("pause");
                
                break;
            }
			case 2:
            {
                ///VISUALIZACAO DOS DADOS CADASTRADOS
                printf("\n\n===PERFIL DO PACIENTE===");
                printf("\n\nNOME: %s", nome);
                printf("\n\nSOBRENOME: %s", sobrenome);
                printf("\n\nSEXO: %s",sexo);
                printf("\n\n=====DATA DE NASCIMENTO=====");
                printf("\nDIA: %d", dia);
                printf("\nMES: %d", mes);
                printf("\nANO: %d", ano);
                printf("\nIDADE: %d", idade);
                printf("\n\n====ENDERECO E CONTATO=====");
                printf("\nTELEFONE: %d", celular);
                printf("\nENDERECO: %s", endereco);
                printf("\nEMAIL: %s", email);
                printf("\nESTADO: %s", estado);
                printf("\nCIDADE: %s", cidade);
                printf("\nALERGIA: %s", alergia);
                printf("\nSANGUE: %d", sangue);
                if(sangue==1){
                    printf("Sangue tipo A positivo");
                }
                else if(sangue==2){
                    printf("Sangue tipo A negativo");
                }
                else if(sangue==3){
                    printf("Sangue tipo B positivo");
                }
                else if(sangue==4){
                    printf("Sangue tipo B negativo");
                }
                else if(sangue==5){
                    printf("Sangue tipo O positivo");
                }
                else if(sangue==6){
                    printf("Sangue tipo O negativo");
                }
                else if(sangue==7){
                    printf("Sangue tipo AB positivo");
                }
                else if(sangue==8){
                    printf("Sangue tipo AB negativo");
                }
                
                printf("\n\n*Deseja alterar seus dados ?");
                printf("\n*Digite 5 para alterar, ou outro numero para sair.");
                scanf("%d", &mudar);
                
                if(mudar==5)
                {
                    printf("\n\t======ALTERAR======");
                    printf("\n1-NOME: %s", nome);
                    printf("\n2-SOBRENOME: %s", sobrenome);
                    printf("\n3-SEXO: %s", sexo);
                    printf("\n4-DIA: %d", dia);
                    printf("\n5-MES: %d", mes);
                    printf("\n6-ANO: %d", ano);
                    printf("\nIDADE: %d", idade);
                    printf("\n7-TELEFONE: %d", celular);
                    printf("\n8-ENDERECO: %s", endereco);
                    printf("\n9-EMAIL: %s", email);
                    printf("\n10-ESTADO: %s", estado);
                    printf("\n11-CIDADE: %s", cidade);
                    printf("\n12ALERGIA: %s", alergia);
                    printf("\n13-TIPO SANGUINEO: %d", sangue);
                    scanf("%d", &mudar);
                    if(mudar==1){
                        printf("1-NOME: ");
                        scanf("%s", nome);
                        fflush(stdin);
                    }
                    else if(mudar==2){
                        printf("2-SOBRENOME: ");
                        scanf("%s", sobrenome);
                        fflush(stdin);
                    }
                    else if(mudar==3){
                        printf("3-SEXO: ");
                        scanf("%s", sexo);
                        fflush(stdin);
                    }
                    else if(mudar==4){
                        printf("4-DIA: ");
                        scanf("%d", &dia);
                        fflush(stdin);
                    }
                    else if(mudar==5){
                        printf("5-MES: ");
                        scanf("%d", &mes);
                        fflush(stdin);
                    }
                    else if(mudar==6){
                        printf("6-ANO: ");
                        scanf("%d", &ano);
                        fflush(stdin);
                    idade=2020-ano;
                    }
                    else if(mudar==7){
                        printf("7-TELEFONE: ");
                        scanf("%d", &celular);
                        fflush(stdin);
                    }
                    else if(mudar==8){
                        printf("8-ENDERECO: ");
                        scanf("%s", endereco);
                        fflush(stdin);
                    }
                    else if(mudar==9){
                        printf("9-EMAIL: ");
                        scanf("%s", email);
                        fflush(stdin);
                    }
                    else if(mudar==10){
                        printf("10-ESTADO: ");
                        scanf("%s", estado);
                        fflush(stdin);
                    }
                    else if(mudar==11){
                        printf("11-CIDADE: ");
                        scanf("%s", cidade);
                        fflush(stdin);
                    }
                    else if(mudar==12){
                        printf("12-ALERGIA: ");
                        scanf("%s", alergia);
                        fflush(stdin);
                    }
                    else if(mudar==13){
                        printf("13-TIPO SANGUINEO: ");
                        scanf("%d", &sangue);
                        fflush(stdin);
                        if(sangue==1){
                            printf("\n*A positivo");
                        }
                        if(sangue==2){
                            printf("\n*A negativo");
                        }
                        if(sangue==3){
                            printf("\n*B positivo");
                        }
                        if(sangue==4){
                            printf("\n*B negativo");
                        }
                        if(sangue==5){
                            printf("\n*O positivo");
                        }
                        if(sangue==6){
                            printf("\n*O negativo");
                        }
                        if(sangue==7){
                            printf("\n*AB positivo");
                        }
                        if(sangue==8){
                            printf("\n*AB negativo");
                        }
                    }
                    break;
                }
                case 3:     ///SOBRE O PROJETO
                {
                    printf("\n       IIII");
                    printf("\n       IIII");
                    printf("\n   IIIIIIIIIIII");
                    printf("\n   IIIIIIIIIIII");          ///lOGO DO HOSPITAL E NOME
                    printf("\n       IIII");
                    printf("\n       IIII");
                    printf("\n\n     HOSPITAL");
                    printf("\n      IBIRA");
                    
                    
                    printf("\n\n========================================================");
                    printf("\nPROJETO DESENVOLVIDO POR HENZO COSTA DE JESUS \n");
                    printf("\nCOM O OBJETIVO DE REALIZAR UM SISTEMA DE UM HOSPITAL");
                    printf("\n========================================================");
                    system("pause");
                    
                    break;
                }
                case 4:   ///APAGAR DADOS
                {
                    nome[0]='\0';
                    sobrenome[0]='\0';
                    sexo[0]='\0';
                    dia=0;
                    mes=0;
                    ano=0;
                    idade=0;
                    celular=0;
                    email[0]='\0';
                    estado[0]='\0';
                    cidade[0]='\0';
                    sangue=0;
                    alergia[0]='\0';
                    
                    printf("\n==DADOS APAGADOS COM SUCESSO!==");
                    system("pause");
                    
                    break;
                }
                case 5:
                {
                    printf("\t DESEJA SAIR DO SISTEMA ?\n\n");
                    printf("\t 5-SIM   6-NAO\n\n");
                    printf("\t SUA ESCOLHA\n\n");
                    scanf("%d", &menu);

                    if(menu ==5)
                    {
                        printf("OBRIGADO POR ACESSAR NOSSO SISTEMA, ATE LOGO...");
                        return 0;
                    }
                    break;
                }
            }
        }
    }
}
