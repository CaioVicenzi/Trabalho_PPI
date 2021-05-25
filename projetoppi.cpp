#include <stdio.h>

/*Biblioteca para limpar tela*/
#include <stdlib.h>

/*Biblioteca para manipula��o de strings*/
#include <string.h>

/*Biblioteca de acentua��o*/
#include <locale.h>

// necess�rio p/ as fun��es rand() e srand()
#include <stdlib.h>

//necess�rio p/ fun��o time()
//necess�rio para usar localtime() e struct tm
#include<time.h>

int main(){//Retornar um inteiro para o sistema operacional

	
   setlocale(LC_ALL, "Portuguese");//Faz refer�ncia � todos os aspectos da localiza��o
	
	int opcaoMenu = 0,tamanhoString = 0,opcaoRegiao = 0,horaCadastro;//Armazena valores num�ricos inteiros
	char nomeCadastro[100],nomeCadastroPrintf[100],sexoCadastro,emailCadastro[100],nomeDaMae[100],dataNasci[100],enderecoCadastro[100],tipoComorbidade[100],cpfCadastro[11],cnsCadastro[32],telefoneCadastro[12],cepCadastro[8],redefinirDadosCadastro,retornarMenu,regiaoAdm[100],estabelecimentoSaude[100];//armazena caracteres
	
do{//Comando de repeti��o junto com while
		do{//Comando de repeti��o junto com while
			printf("1-Inicio\n");//Mensagem a ser escrita na tela
			printf("2-Informa��es sobre a Covid-19\n");//Mensagem a ser escrita na tela
			printf("3-Cadastro\n");//Mensagem a ser escrita na tela
			printf("4-Agendamento\n");//Mensagem a ser escrita na tela
			printf("5-Sair do programa\n\n");//Mensagem a ser escrita na tela
			
			printf("Digite um n�mero correspondente ao menu:");//Mensagem a ser escrita na tela
			scanf("%d",&opcaoMenu);//express�o de controle
			system("cls");// limpar a tela de sa�da de programa
			
			tamanhoString = strlen(nomeCadastroPrintf);//vari�vel do tipo inteiro
			
			if(opcaoMenu == 4 && tamanhoString < 2){//operador logico
				printf("Cadastro N�o Encontrado\n");//Mensagem a ser escrita na tela
				printf("Fa�a seu cadastro\n\n");//Mensagem a ser escrita na tela
			}
			
		}while(opcaoMenu == 4 && tamanhoString < 3);//Comandos a serem repetidos
	
	    
		system("cls");// limpar a tela de sa�da de programa
	     
		switch(opcaoMenu)//Uma forma de reduzir a complexidade de v�rios if
		{
			case 1 ://Uma forma de reduzir a complexidade de v�rios if 
			
			printf("\n");//Espa�o entre linhas 
			printf("O CUIDADO � DE CADA UM O BENEF�CIO � PARA TODOS\n");//Mensagem a ser escrita na tela
			printf("Use m�scara\n");//Mensagem a ser escrita na tela
			printf("Lave as m�os com �gua e sab�o\n");//Mensagem a ser escrita na tela
			printf("Manteha dist�ncia segura\n");//Mensagem a ser escrita na tela
			printf("Manteha os ambientes ventilados\n\n");//Mensagem a ser escrita na tela
			
			printf("VACIN�METRO\n");//Mensagem a ser escrita na tela
			printf("90.664.475\n");//Mensagem a ser escrita na tela
			printf("De doses distribu�das em todo o Brasil\n\n");//Mensagem a ser escrita na tela
			
			printf("VACIN�METRO\n");//Mensagem a ser escrita na tela
			printf("54.013.881\n");//Mensagem a ser escrita na tela
			printf("De doses aplicadas em todo o Brasil\n\n");//Mensagem a ser escrita na tela
			
			printf("NOT�CIAS DO DIA:\n");//Mensagem a ser escrita na tela
			printf("Ministro Queiroga aplica primeira dose em atletas que representar�o o Brasil em T�quio\n");//Mensagem a ser escrita na tela
			printf("P�tria vacinada: mais de 90 milh�es de doses de vacinas Covid-19 j� foram distribu�das pelo Minist�rio da Sa�de\n");//Mensagem a ser escrita na tela
		    printf("Fiocruz garante entrega de 18 milh�es de vacinas Astazeneca da Covid-19 at� junho\n\n");//Mensagem a ser escrita na tela
			;break;//Realiza desvio incondicional
			
			
			
			case 2 ://Uma forma de reduzir a complexidade de v�rios if
				
			printf("\n");//Espa�o entre linhas 
			printf("PREVINA-SE\n");//Mensagem a ser escrita na tela
			printf("O cuidado � de cada um.A responsabilidade �\nde todos.Ainda que o Brasil esteja avan�ando\nem vacina��o,� importante que a popula��o\nmanteha medidas de preven��o e controle\norientadas pelo Minist�rio da Sa�de.� adontando\nmedidas simples que salvaremos mais vidas!");//Mensagem a ser escrita na tela
		
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
		
			printf("Formas de transmiss�o:\n");//Mensagem a ser escrita na tela
			printf("1-Por saliva,catarro e got�culas expelidas pela boca(espirro,tosse e fala)\n");//Mensagem a ser escrita na tela
			printf("2-Apertos de m�o,abra�os e beijos\n");//Mensagem a ser escrita na tela
			printf("3-ma�anetas e corrim�os");//Mensagem a ser escrita na tela
			
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			
			printf("Reduza o risco de transmiss�o\n");//Mensagem a ser escrita na tela
			printf("� dever de todos adotar medidas de preven��o\ne controle no dia a dia para conter a\ndissemina��o do v�rus.Confira seis medidas\npreventivas para colocar em pr�tica:\n\n");//Mensagem a ser escrita na tela
			printf("1-Use m�scara o tempo todo\n");//Mensagem a ser escrita na tela
			printf("2-Lave as m�os com �gua e sab�o ou use �lcool em gel\n");//Mensagem a ser escrita na tela
			printf("3-Cubra o nariz e boca ao espirrar\n");//Mensagem a ser escrita na tela
			printf("4-Manteha o distanciamento social m�nimo de 1 metro\n");//Mensagem a ser escrita na tela
			printf("5-Evite aglomera��es\n");//Mensagem a ser escrita na tela
			printf("6-Isole-se ao apresentar sintomas como tosse,dor de garganta e febre");//Mensagem a ser escrita na tela
			
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			
			printf("Use a m�scara corretamente\n");//Mensagem a ser escrita na tela
			printf("O Coronav�rus(SARS-CoV-2) � transmitido de\ntr�s formas:contato,goticulas ou aerossol.\nDessa forma,a m�scara atua como uma \nbarreira.Ela evita que got�culas respirat�rias\npropaguem no ar quando a pessoa tosse,\nespirra,fala ou levanta a voz.\nPor isso,use m�scara!\n\n");//Mensagem a ser escrita na tela
			
			
			printf("1-Posicione a m�scara sobre o nariz e boca\n");//Mensagem a ser escrita na tela
			printf("2-Molde a parte superior no nariz e prenda as tiras nas orelhas,ou atr�s da cabe�a\n");//Mensagem a ser escrita na tela
		    printf("3-Vende ao m�ximo a entrada de ar nas laterais");//Mensagem a ser escrita na tela
		    
		    printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			
			printf("Vacinas dispon�veis\n");//Mensagem a ser escrita na tela
			printf("As vacinas adotadas pelo SUS passaram por todas as etapas necess�rias para a \ncria��o de um novo imunizante e cumprem a crit�rios cient�ficos rigorosos \nadotados pela Ag�ncia Nacional de Vigil�ncia Sanit�ria (Anvisa). Veja o status das \nvacinas que estar�o dispon�veis no Programa Nacional de Imuniza��es (PNI).");//Mensagem a ser escrita na tela
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			printf("Registros Definitivos\n");//Mensagem a ser escrita na tela
			printf("\n");//Espa�o entre linhas 
			printf("Laborat�rio                     Doses\n");//Mensagem a ser escrita na tela
			printf("Astrazeneca/Oxford(Fiocruz)       2\n");//Mensagem a ser escrita na tela
			printf("Pfizer(BioNTech)                  2");//Mensagem a ser escrita na tela
			
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			printf("Aprovadas para uso emergencial\n");//Mensagem a ser escrita na tela
			printf("\n");//Espa�o entre linhas 
			printf("Laborat�rio                     Doses\n");//Mensagem a ser escrita na tela
			printf("janssen(johnson & johnson)        1\n");//Mensagem a ser escrita na tela
			printf("CoronaVac(Butantan)               2");//Mensagem a ser escrita na tela
			
			printf("\n");//Espa�o entre linhas 
			printf("\n");//Espa�o entre linhas 
			printf("Em an�lise pela Anvisa\n");//Mensagem a ser escrita na tela
			printf("\n");//Espa�o entre linhas 
			printf("Laborat�rio                     Doses\n");//Mensagem a ser escrita na tela
			printf("Covaxin(Bharat Biotech)           2\n");//Mensagem a ser escrita na tela
			printf("Sputnik-V                         2\n\n");//Mensagem a ser escrita na tela
			;break;//Realiza desvio incondicional
			
			
			
			case 3 ://Uma forma de reduzir a complexidade de v�rios if
			
			printf("VacinaDF Secretaria de Sa�de Do Distrito Federal\n");//Mensagem a ser escrita na tela
			printf("Vacina��o COVID-19 Cadastro para pessoas com comorbidade\n\n");//Mensagem a ser escrita na tela
			
			/*Redefinir cadastro*/
			do{//Comando de repeti��o junto com while
			/*Valida��o*/
			do{//Comando de repeti��o junto com while
			printf("NOME*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&nomeCadastro);//express�o de controle
			
			tamanhoString = strlen(nomeCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um nome v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    strcpy(nomeCadastroPrintf,nomeCadastro);//Realiza a c�pia do conte�do de uma vari�vel a outra
			
			printf("Sexo*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%c",&sexoCadastro);//express�o de controle
			
			
			
			do{//Comando de repeti��o junto com while
				
			printf("E-Mail: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&emailCadastro);//express�o de controle
			
			tamanhoString = strlen(emailCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um E-mail v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    
			do{//Comando de repeti��o junto com while
			printf("Nome da m�e: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&nomeDaMae);//express�o de controle
			
			tamanhoString = strlen(nomeDaMae);//vari�vel do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um nome v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
			do{//Comando de repeti��o junto com while
			printf("Data nascimento(XX/YY/ZZZZ)*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&dataNasci);//express�o de controle
			
			tamanhoString = strlen(dataNasci);//vari�vel do tipo inteiro
			
			if(tamanhoString < 7 || tamanhoString > 10){//operador logico
				printf("Digite uma data de nascimento v�lida\n");//Mensagem a ser escrita na tela
			}
			
			
			}while(tamanhoString < 7 || tamanhoString > 10);//Comandos a serem repetidos
			
			do{//Comando de repeti��o junto com while
			printf("CPF: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&cpfCadastro);//express�o de controle
			
			tamanhoString = strlen(cpfCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString != 11){//operador logico
				printf("Digite um CPF v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString != 11);//Comandos a serem repetidos
			
			
			
			do{//Comando de repeti��o junto com while
			printf("CNS: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&cnsCadastro);//express�o de controle
			
			tamanhoString = strlen(cnsCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString != 32){//operador logico
				printf("Digite um CNS v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString != 32);//Comandos a serem repetidos
		    
		    
			do{//Comando de repeti��o junto com while
			printf("Digite seu tipo de comorbidade*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&tipoComorbidade);//express�o de controle
			
			
			tamanhoString = strlen(tipoComorbidade);//vari�vel do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um tipo de comorbidade v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
			do{//Comando de repeti��o junto com while
			printf("Telefone*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&telefoneCadastro);//express�o de controle
			
			tamanhoString = strlen(telefoneCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString < 12){//operador logico
				printf("Digite um telefone v�lido\n");//Mensagem a ser escrita na tela
			}
			
			}while(tamanhoString < 12);//Comandos a serem repetidos
			
			
			do{//Comando de repeti��o junto com while
			printf("CEP*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",&cepCadastro);//express�o de controle
			
			tamanhoString = strlen(cepCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString < 8){//operador logico
				printf("Digite um CEP v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 8);//Comandos a serem repetidos
			
			
			do{//Comando de repeti��o junto com while
			printf("Endere�o*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%s",enderecoCadastro);//express�o de controle
			
			tamanhoString = strlen(enderecoCadastro);//vari�vel do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um endere�o v�lido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    system("cls");// limpar a tela de sa�da de programa
		     
		    printf("\n");//Espa�o entre linhas 
		    printf("\n");//Espa�o entre linhas 
			printf("CADASTRO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
		    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro 
			printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro 
			printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro 
			printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro 
			printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro 
			printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro 
			printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro 
			printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro 
			printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro 
			printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro 
			printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro 
			
			printf("Deseja redefinir seus dados(S ou N):");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
			scanf("%c",&redefinirDadosCadastro);//express�o de controle
		
	    }while(redefinirDadosCadastro != 'N');//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
		
        ;break;//Realiza desvio incondicional
		
		case 4 ://Uma forma de reduzir a complexidade de v�rios if 
	 
		printf("VacinaDF Secretaria de Sa�de Do Distrito Federal\n");//Mensagem a ser escrita na tela
		printf("Vacina��o COVID-19 Agendamento para pessoas com comorbidade\n\n");//Mensagem a ser escrita na tela
		printf("Local,data e hora para agendamento\n\n");//Mensagem a ser escrita na tela
		
		printf("Escolha uma das regi�es administrativas para tomar a vacina: \n");//Mensagem a ser escrita na tela
		printf("1-Regi�o Central\n");//Mensagem a ser escrita na tela
		printf("2-Regi�o Centro-Sul\n");//Mensagem a ser escrita na tela
		printf("3-Regi�o Oeste\n");//Mensagem a ser escrita na tela
		printf("4-Regi�o Norte\n");//Mensagem a ser escrita na tela
		printf("5-Regi�o Sudo-este\n");//Mensagem a ser escrita na tela
		printf("6-Regi�o Leste\n");//Mensagem a ser escrita na tela
		printf("7-Regi�o Sul\n\n");//Mensagem a ser escrita na tela
		
		
		printf("Digite um n�mero correspondente a sua regi�o administrativa: ");//Mensagem a ser escrita na tela
		scanf("%d",&opcaoRegiao);//express�o de controle
		
		switch(opcaoRegiao)//Uma forma de reduzir a complexidade de v�rios if
		{
			
		case 1 ://Uma forma de reduzir a complexidade de v�rios if  
		
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		
		printf("-UBS 1 da Asa Sul                   Parque da Cidade\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 da Asa Norte                 Shopping Iguatemi\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do cruzeiro                  Policl�nica do Lago Sul\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Lago Norte                Shopping Iguatemi\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("EStabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
		printf("\n");//Espa�o entre linhas 
		printf("\n");//Espa�o entre linhas 
		
		do{//Comando de repeti��o junto com while
	    srand(time(NULL));//gerando valores aleat�rios na faixa de 8 a 17
	    
	    horaCadastro = (rand() % 17);//gerando valores aleat�rios na faixa de 8 a 17

	    }while(horaCadastro < 8);//Comandos a serem repetidos
	    
	     
	    struct tm *data_hora_atual;//ponteiro para struct que armazena data e hora 
	    
	    time_t segundos;//vari�vel do tipo time_t para armazenar o tempo em segundos
	  
	    time(&segundos);//obtendo o tempo em segundos   
	  
	    //para converter de segundos para o tempo local  
	    //utilizamos a fun��o localtime  
	    data_hora_atual = localtime(&segundos);  
	  
	    //para acessar os membros de uma struct usando o ponteiro
	    //utilizamos o operador -> no nosso caso temos: 
	    //data_hora_atual->membro_da_struct
	  
	    /*Printar dados*/
	    printf("AGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro 
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		
		
		case 2 ://Uma forma de reduzir a complexidade de v�rios if  
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 da Candangol�ndia            UBS 2 do Guar�\n");//Mensagem a ser escrita na tela
        printf("-UBS 1 do Guar�                     UBS 1 do Riacho Fundo I\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do Guar�\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 do Guar�\n");//Mensagem a ser escrita na tela
		printf("-UBS 4 do Guar�\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do N�cleo Bandeirante\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Riacho Fundo II\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do Riacho Fundo II\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 da Estrutural\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("EStabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		
		;break;//Realiza desvio incondicional
		
		case 3 ://Uma forma de reduzir a complexidade de v�rios if
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de Brazl�ndia                UBS 5 de Ceil�ndia\n");//Mensagem a ser escrita na tela
		printf("-Pra�a dos Direitos de Ceil�ndia\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 de Ceil�ndia\n");//Mensagem a ser escrita na tela
		printf("-UBS 7 de Ceil�ndia\n");//Mensagem a ser escrita na tela
		printf("-UBS 16 de Ceil�ndia\n");//Mensagem a ser escrita na tela
		printf("-UBS 17 de Ceil�ndia\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("EStabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		
		;break;//Realiza desvio incondicional
		
		case 4 ://Uma forma de reduzir a complexidade de v�rios if  
		printf("PEDESTRES                               DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 5 e Planaltina                     UBS 5 e Planaltina\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de Sobradinho                    UBS 1 de Sobradinho \n");//Mensagem a ser escrita na tela
		printf("-Regional de Ensino de Sobradinho II    Regional de Ensino de Sobradinho II \n");//Mensagem a ser escrita na tela
		printf("-Jardim de inf�ncia Casa de Viv�ncia\n");//Mensagem a ser escrita na tela
		printf("-Administra��o regional da Fercal\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("EStabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
		
		
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o 
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		;break;//Realiza desvio incondicional
		
		
		case 5 ://Uma forma de reduzir a complexidade de v�rios if  
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de taguatinga                Faculdade Unieuro-�guas claras\n");//Mensagem a ser escrita na tela
		printf("-UBS 5 de taguatinga                Adm Regional de Samambaia\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 de Samambaia\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 do Recanto das Emas \n");//Mensagem a ser escrita na tela
		printf("-UBS 7 de Samambaia \n");//Mensagem a ser escrita na tela
		printf("-Espa�o C�u das Artes\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("Estabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
		
		
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o  
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		case 6 ://Uma forma de reduzir a complexidade de v�rios if
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-Quadra coberta-Adm Regional        Centro de Pr�ticas Sustent�veis\n");//Mensagem a ser escrita na tela
		printf("-Pra�as dos Direitos do Itapo�\n");//Mensagem a ser escrita na tela
		printf("-Gin�sio S�o Bartolomeu\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("EStabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
	
	
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacina��o  
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		
		case 7 ://Uma forma de reduzir a complexidade de v�rios if
		printf("PEDESTRES                               DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Gama                          UBS 1 Sesi Gama\n");//Mensagem a ser escrita na tela
	    printf("-UBS 3 do Gama                          UBS 7 de Santa Maria\n");//Mensagem a ser escrita na tela
	    printf("-UBS 5 do Gama\n");//Mensagem a ser escrita na tela
	    printf("-Igreja Assembleia de Deus\n");//Mensagem a ser escrita na tela
	    printf("-UBS 2 de Santa Maria\n");//Mensagem a ser escrita na tela
	    printf("-Sesi Gama\n\n");//Mensagem a ser escrita na tela
	    
	    
	    printf("Digite a regi�o administrativa:\n");//Mensagem a ser escrita na tela
	    fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&regiaoAdm);//express�o de controle
		
		
		printf("Estabelecimento de Sa�de\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//express�o de controle
		
	
	    
	    
	    printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacina��o: %d\n", data_hora_atual->tm_mday + 5); //Mensagem automatica do dia de vacina��o 
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacina��o
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA M�E: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDERE�O: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
	    
		;break;//Realiza desvio incondicional
		}
	    ;break;//Realiza desvio incondicional
	    
	    case 5 ://Uma forma de reduzir a complexidade de v�rios if
	    	return 0;//Encerra a execu��o de uma fun��o e retorna o controle para a fun��o de chamada
	    ;break;//Realiza desvio incondicional
	}
	
	printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
	scanf("%c",&retornarMenu);//express�o de controle
	system("cls");// limpar a tela de sa�da de programa
	
    }while(retornarMenu != 'N');//Comandos a serem repetidos
	
	return 0;//Encerra a execu��o de uma fun��o e retorna o controle para a fun��o de chamada
}
