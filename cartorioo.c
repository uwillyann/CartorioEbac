#include <stdio.h> // bliblioteca de comunicacao com o usuario
#include <stdio.h> // bliblioteca de alocacao de espaco em memoria 
#include <locale.h> // bliblioteca de alocacoes de texto por regiao
#include <string.h> // bliblioteca responsavel por cuida da string


int main()
{
		
	int opcao=0;//definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
 			
 		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
 	
	 	printf("\t Cartório da EBAC\t\n\n"); //inicio do menu
 		printf("Escolha a opcao desejada do menu:\n\n");
 		printf("\t1 - Registrar nomes\n");
 		printf("\t2 - Consultar nomes\n");
 		printf("\t3 - Deletar nomes\n\n"); 
 		printf("opcao:");//fim do menu
	
 		scanf("%d",&opcao);
	
 		system("cls");
	
 		switch(opcao)
 		{
			case 1:
			registro();
			break;
		
			case 2:
			consultar();
			break;
		
			case 3:
			deletar();
			break;
		
			default:
			printf("Essa opcao nao estar disponivel!\n");
			system("pause");
			break;
		}
	}
}


int registro()
{
	char arquivo [40];
	char cpf[40];
	char nome [40];
	char sobrenome[40];
	char cargo[40];
	
	printf("\n Digite o CPF a ser cadastrado:");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;// cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo
	fprintf(file,cpf);// salva o valor da variavel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("\nDigite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("\nDigite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("\nDigite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}
int consultar()
	
{	setlocale(LC_ALL, "Portuguese");

	char cpf[40];
	char conteudo[200];
	
	printf("\nDigite o CPF a ser consultado :");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");

	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado.\n");
	}
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
}
int deletar()
{
	char cpf[40];
	
	printf("\nDigite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	fclose(file);
	
	if(file == NULL)
	{
		printf("\nO usário não se encontra no sistema!.\n");
	}
	else
	{
		remove(cpf);
		printf("\nUsuário deletado com sucesso!.\n");
		system("pause");
	}
	
}	


