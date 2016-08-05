#include <stdio.h>

/* ce programme  lit deux entiers
et selon le choix de l'utilisateur
vérifie quelques opérations simples */

int main(void)
{
	int a, b ;
	char choix;
	printf("Entrez deux nombres entiers : ");
	scanf("%d %d", &a, &b);
	printf("Tapez\n");
	printf("1 pour savoir si la somme est paire\n");
	printf("2 pour savoir si le produit est pair\n");
	printf("3 pour connaître le signe de la somme\n");
	printf("4 pour connaître le signe du produit\n");
	getchar();
	choix = (char) getchar();
	switch(choix)
	{
		case '1':
			if ((a + b) % 2 == 0)
		 		printf("La somme est paire\n");
		 	else
		 		printf("La somme est impaire\n");
		 	break;

		case '2':
			if ((a * b) % 2 ==0)
				printf("Le produit est pair\n");
			else
				printf("Le produit est impair\n");
			break;

		case '3':
			if ((a + b) >= 0)
				printf("La somme est positive\n");
			else
				printf("La somme est strictement négative\n");
			break;
		case '4':
			if ((a * b) >= 0)
				printf("Le produit est positf\n");
			else
				printf("Le produit est strictement négatif\n");
			break;
		default:
			printf("Choix non conforme .........\n");

	}
	return 0;
}

