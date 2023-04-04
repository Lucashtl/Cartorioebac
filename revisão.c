#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int registro(){
	int arquivo[40];
	int cpf[40];
	int nome[40];
	int sobrenome[40];
	int cargo[40];
	
	printf("Escolha o cpf que deseja registrar:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file, cpf);
	fclose(file);
	
}




int main(){
	int opcao=0;
	int laco=1;
	setlocale(LC_ALL, "portuguese");
	
	for (laco=1;laco=1;){
	system("cls");
	printf("### Cartorio da ebac ###\n\n");
	printf("escolha a opçaõ desejada:\n\n");
	printf("\t1 - Registrar nome\n ");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - deletar nomes\n");
	printf("opção:");
	
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
		    registro();
		    break;
			
	
	}
}







}




