#include <stdio.h>//biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca responsável por alocar espaços na memória
#include <locale.h>//biblioteca responsável por setar a linguagem
#include <string.h>//biblioteca responsável por cuidar das strings


int registro(){

    
	setlocale(LC_ALL, "portuguese");
	

    char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
    printf("digite o cpf que deseja registrar:");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);
    
    FILE *file;
    file = fopen(arquivo, "w");
    fprintf(file, cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome que deseja registrado:");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file, nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
	printf("digite o sobrenome que deseja registrar:");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo que deseja registrar:");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
}



int consulta(){
	
	char cpf[40];
	char conteudo[200];
	setlocale(LC_ALL, "portuguese");
	
	printf("Escolha o cpf que deseja registrar:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL){
		printf("CPF não existe\n\n");
		system("pause");
		
	}
	
	while(fgets(conteudo, 200, file)!= NULL){
		printf("essas são as informações do usuário:");
		printf("%s", conteudo);
	    printf("\n\n");
	}
	system("pause");
}


int deletar(){
	char cpf[40];//variavel do tipo string
	setlocale(LC_ALL, "portuguese");
	
	printf("escolha o cpf que deseja deletar:");
	scanf("%s", cpf);
	
	FILE *file;//abrindo o arquivo
	file = fopen(cpf, "r");
	fclose(file);//fechando o arquivo
	
		if(file == NULL){
	printf("cpf não existe\n\n");
	system("pause");
	}
	
	else
	{
		remove(cpf);
		printf("Usuário deletado com sucesso\n\n");
		system("pause");
	}

	
	
	
	
	

	
	
	
  





}





int main()
{ 
    int opcao=0; // adicionando as variaveis
    int x=1;
    
    
    for(x=1;x=1;){
	
    system("cls");
	
    setlocale(LC_ALL, "portuguese");// Definindo a linguagem
    
    printf("### Cartório da EBAC ###\n\n");// início do menu
    printf("Escolha a opção desejada no menu\n\n");
    printf("\t1 - Registrar nomes\n\n");
    printf("\t2 - Consultar nomes\n\n");
    printf("\t3 - Deletar nomes\n\n");
	printf("Opção:");//final do menu
	
    scanf("%d", &opcao);//Armazenando a escolha do usuário
    
   system("cls");//responsavel por limpar a tele
   
   switch(opcao)//responsavel por dar istruções para as opções escolhidas 
   {

   	
   	case 1: 
	registro();
   	
    break;
    
    case 2:
   	consulta();   
    break;
        
    case 3:
    deletar();
	break;
	
	
   
   default:
   	printf("\tEsta opção não existe!\n\n");
	    system("pause");
	    break;
   }

}

    

}

