#include <stdio.h>
#include <string.h>

#define MAXSIZE 101

int matriz[MAXSIZE][MAXSIZE];
int memoria[MAXSIZE][MAXSIZE];

int calcula(int linha, int coluna);
int mim(int a, int b);

int main()
{

	unsigned short i, j;
	unsigned short tamMatriz;

	scanf("%hu", &tamMatriz);

	for (i = 1; i <= tamMatriz; ++i)
		for (j = 1; j <= tamMatriz; ++j)
			scanf("%d", &matriz[i][j]);

	memset(memoria, -1, sizeof(memoria));

	printf("%d\n", calcula(tamMatriz, 1));

}

int calcula(int linha, int coluna)
{

	int soma = 0;
	unsigned short i;

	if (memoria[linha][coluna] != -1)
		return memoria[linha][coluna];


	if (linha == 1)
		return memoria[linha][coluna] = matriz[linha][coluna];

	for (i = 0; i < linha; ++i)
		soma += matriz[linha][coluna + i];

	return memoria[linha][coluna] = soma + mim(calcula(linha - 1, coluna), calcula(linha - 1, coluna + 1));

}

int mim(int a, int b)
{

	if (a < b)
		return a;
	else
		return b;

}