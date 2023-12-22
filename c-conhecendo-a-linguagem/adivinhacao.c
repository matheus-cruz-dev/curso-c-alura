#include <stdio.h>

int main() {

	// imprime o cabe�alho do nosso jogo
	printf("********************************\n");
	printf("Bem vindo ao jogo de adivinha��o\n");
	printf("********************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Qual � o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	int acertou = (chute == numerosecreto);

	if (acertou)
	{
		printf("Parabens! Voc� acertou!\n");
		printf("Jogue de novo, voc� � um bom jogador!");
	}
	else {
		printf("Voc� errou!\n");

		int maior = (chute > numerosecreto);

		if (maior)
		{
			printf("Seu chute foi maior que o n�mero secreto\n");
		}
		else {
			printf("Seu chute foi menor que o n�mero secreto\n");
		}

		printf("Mas n�o desanime, tente de novo!\n");
	}
}