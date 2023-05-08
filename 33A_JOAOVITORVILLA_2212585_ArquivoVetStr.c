#include <stdio.h>

int main(void) {
	FILE* f;
	char* listaAlfab[26];
	char** obras;
	char** autores;
	f = fopen("livros.txt", "r");
	if (f == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
		while (!feof(f)) {

		}
	}
}

//vai ter que usar alocação dinamica nos vetores