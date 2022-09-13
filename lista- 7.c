//lista 7

// 1-

// Fa�a uma fun��o que receba como par�metros uma matriz 30 X 4 de n�meros reais, j� preenchida, 
// contendo as 4 notas das provas de cada aluno de uma turma e a quantidade de alunos da turma.
// A fun��o dever� exibir a m�dia de cada aluno. A fun��o dever� exibir tamb�m a m�dia de cada 
// prova.

void medias(float notas [0][4])
{
	int i,k;
	float soma,md;
	for(i = 0; i<30;i++)
	{
		soma = 0;
		for(k = 0, k < 4, k++ )
		{
			soma += notas[i][k];
		}
		md = soma/k;
		printf("\nMedia do aluno %d : %.1f", i + 1, md)
	}
	
	for( k = 0; k < 4; k++)
	{
		soma = 0;
		for( i= 0 ; i< 50; i++)
		{
			soma +=notas [i][k]
		}
		md = soma / i;
		printf("\nMedia da prova %d : %.1f", k+1,md)
	}
}

// 2-

// Fa�a uma fun��o que receba como par�metros uma matriz 6 X 12 de inteiros, j� preenchida, 
// contendo a quantidade mensal vendida do carro Gol nos anos de 2010 a 2015 e um vetor 
// contendo o pre�o do carro nos anos de 2010 a 2015. A fun��o dever� exibir o valor total 
// das vendas do carro Gol em cada ano (2010 a 2015).

void valorVendidos(int qtd[][12],float preco[])
{
	int i, k; 
	float valor;
	for(i=0, i < 6 ; i++)
	{
		soma = 0;
		for(k=0, k<12; k++)
		   soma += qtd[i][k];
		   
		valor = soma * preco[i];
	    printf("\nValor total vendido no ano%d: %.2f", i+2015,valor);
	}
		   
			
	
}

// 3-

// Fa�a um programa, usando a fun��o abaixo, que leia o nome de cada aluno( no m�x: 40 cara)
// e as 2 notas, calcule a m�dia e exiba o nome, a media e a situa��o(mesma media do cefet).
// Fa�a a fun��o situa��o que exiba a m�dia de um aluno e exiba sua situa��o. A turma possui
// 30 alunos.

#include<stdio.h>
#define TOT 30
#define MAXC 41

void situacao(float md)
{
	if(md >=5.0)
	   printf("\tAprovado");
	   
	else
	   printf("\tReprovado");
}

int main()
{
	char nome[MAXC];
	
	for(cont = 0; cont <TOT; cont ++)
	{
		printf("Digite nome:");
		scanf(" %[^\n]", nome);
		printf("Digite as 2 notas: ");
		scanf("%f%f", &nota1, &nota2);
		md = (nota1 + nota2) / 2;
		printf("\nNome %1 \tMedia: %.1f", nome,md);
		situacao(md);
	}
	return 0;
}

