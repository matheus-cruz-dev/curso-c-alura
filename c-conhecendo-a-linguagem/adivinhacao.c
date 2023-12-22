#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

	// imprime o cabeçalho do nosso jogo
	printf("********************************\n");
	printf("Bem vindo ao jogo de adivinhação\n");
	printf("********************************\n");

	int numerosecreto = 42;

	int chute;
	int ganhou = 0;
	int tentativa = 0;

	while (ganhou == 0)
	{
		printf("Tentativa %d\n", tentativa+1);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if (chute < 0)
		{
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);

		if (acertou)
		{
			printf("Parabens! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");
			
			ganhou = 1;
		}
		else if (maior)
		{
			printf("Você errou!\n");
			printf("Seu chute foi maior que o número secreto\n");

		}
		else {
			printf("Seu chute foi menor que o número secreto\n");
		}

		tentativa++;
	}

	printf("Fim de jogo!\n");
	printf("Você acertou em %d tentativas!", tentativa);
}