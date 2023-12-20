#include <stdio.h>

int main() {

	// imprime o cabeçalho do nosso jogo
	printf("********************************\n");
	printf("Bem vindo ao jogo de adivinhação\n");
	printf("********************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	if (chute == numerosecreto)
	{
		printf("Parabens! Você acertou!\n");
		printf("Jogue de novo, você é um bom jogador!");
	}
	else {
		printf("Você errou!\n");

		if (chute > numerosecreto)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		else {
			printf("Seu chute foi menor que o número secreto\n");
		}

		printf("Mas não desanime, tente de novo!\n");
	}
}