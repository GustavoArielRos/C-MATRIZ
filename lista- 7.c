//lista 7

// 1-

// Faça uma função que receba como parâmetros uma matriz 30 X 4 de números reais, já preenchida, 
// contendo as 4 notas das provas de cada aluno de uma turma e a quantidade de alunos da turma.
// A função deverá exibir a média de cada aluno. A função deverá exibir também a média de cada 
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

// Faça uma função que receba como parâmetros uma matriz 6 X 12 de inteiros, já preenchida, 
// contendo a quantidade mensal vendida do carro Gol nos anos de 2010 a 2015 e um vetor 
// contendo o preço do carro nos anos de 2010 a 2015. A função deverá exibir o valor total 
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

// Faça um programa, usando a função abaixo, que leia o nome de cada aluno( no máx: 40 cara)
// e as 2 notas, calcule a média e exiba o nome, a media e a situação(mesma media do cefet).
// Faça a função situação que exiba a média de um aluno e exiba sua situação. A turma possui
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

