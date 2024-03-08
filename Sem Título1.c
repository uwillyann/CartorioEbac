#include <stdio.h> // bliblioteca de comunicação com o usuário
#include <stdio.h> // bliblioteca de alocação de espaço em memória
#include <locale.h> // bliblioteca de alocações de texto por região
#include <string.h> // bliblioteca responsavel por cuida da string

registro interno()
{
	chararquivo[40];
	charcpf[40];
	nome de caractere[40];
	char sobrenome[40];
	carga char[40];
	
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf);
	
	ARQUIVO *arquivo;
	arquivo = fopen(arquivo, "w");
	fprintf(arquivo,cpf);
	fclose(arquivo);
	
	arquivo = fopen(arquivo,"a");
	fprintf(arquivo,"",");
	fclose(arquivo);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	arquivo = fopen(arquivo, "a");
	fprintf(arquivo,nome);
	fclose(arquivo);
	
	arquivo = fopen(arquivo, "a");
	fprintf(arquivo,"",");
	fclose(arquivo);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s,",sobrenome);
	
	arquivo = fopen(arquivo, "a");
	fprintf(arquivo,sobrenome);
	fclose(arquivo);
	
	arquivo = fopen(arquivo, "a");
	fprintf(arquivo,"",");
	fclose(arquivo);
	
	printf("Digite a carga a ser cadastrada:");
	scanf("%s",carga);
	
	arquivo = fopen(arquivo,"a");
	fprintf(arquivo,carga);
	fclose(arquivo);
	
	sistema("pausa");
}

consulta interna()
{
	charcpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	ARQUIVO *arquivo;
	arquivo = fopen(cpf,"r");
	
	if(arquivo == NULO)
	{
		printf("Não foi possível abrir o aquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, arquivo) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	sistema("pausa");
	
	
	
	
}


int deletar()
{
	printf("você escolheu deletar nomes!\n");
	sistema("pausa");
}

int principal()
{
	int opcao=0;//definindo variáveis
	int laco=1;
	
	para(laco=1;laco=1;)
	{
		sistema("cls");
 		
		
 		
	
 	setlocale(LC_ALL, "Português"); //definindo a linguagem
 	printf("\t Cartório da EBAC\t\n\n"); //inicio do menu
 	printf("Escolha a opção desejada do menu:\n\n");
 	printf("\t1 - Nomes de registradores\n");
 	printf("\t2 - Consultar nomes\n");
 	printf("\t3 - Deletar nomes\n\n");
 	printf("opção:"); //fim do menu
	
 	scanf("%d",&opcao);
	
 	sistema("cls");
	
 		switch(opção)
 		{
			caso 1:
			registro();
			quebrar;
		
			caso 2:
			consulta();
			quebrar;
		
			caso 3:
			deletar();
			quebrar;
		
			padrão:
			printf("Essa opção não está disponível!\n");
			sistema("pausa");
			quebrar;
		}

	}
}
