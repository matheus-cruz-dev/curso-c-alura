#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

	// imprime o cabe�alho do nosso jogo
	printf("********************************\n");
	printf("Bem vindo ao jogo de adivinha��o\n");
	printf("********************************\n");

	int numerosecreto = 42;

	int chute;
	int ganhou = 0;
	int tentativa = 0;

	while (ganhou == 0)
	{
		printf("Tentativa %d\n", tentativa+1);
		printf("Qual � o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if (chute < 0)
		{
			printf("Voc� n�o pode chutar n�meros negativos!\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);

		if (acertou)
		{
			printf("Parabens! Voc� acertou!\n");
			printf("Jogue de novo, voc� � um bom jogador!\n");
			
			ganhou = 1;
		}
		else if (maior)
		{
			printf("Voc� errou!\n");
			printf("Seu chute foi maior que o n�mero secreto\n");

		}
		else {
			printf("Seu chute foi menor que o n�mero secreto\n");
		}

		tentativa++;
	}

	printf("Fim de jogo!\n");
	printf("Voc� acertou em %d tentativas!", tentativa);
}