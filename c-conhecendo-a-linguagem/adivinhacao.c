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

	if (chute == numerosecreto)
	{
		printf("Parabens! Voc� acertou!\n");
		printf("Jogue de novo, voc� � um bom jogador!");
	}
	else {
		printf("Voc� errou!\n");
		printf("Mas n�o desanime, tente de novo!\n");
	}
}