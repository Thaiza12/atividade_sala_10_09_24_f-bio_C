//Escreva uma funC'C#o chamada minha_strlen que recebe uma string (um vetor de
//caracteres terminado em '\0') e retorna o comprimento da string, excluindo o
//caractere nulo \0.

#include <stdio.h>

int minha_strlen( char a[20]) {
	int i=0;
	int tam_caracter=0;

	for(i = 0; i < 20; i++) {
		if(a[i]=='\0') {
			tam_caracter = i;
			break;
		}
	}

	return tam_caracter;
}
int main() {

	char palavra[20];

	printf("Digite uma frase \n");
	scanf("%s", palavra);


	printf("A quantidade %d", minha_strlen(palavra));

	return 0;
}