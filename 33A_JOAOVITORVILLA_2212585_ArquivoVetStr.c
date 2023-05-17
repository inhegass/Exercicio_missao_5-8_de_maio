#include <stdio.h>

void alocaMemoria(char** v, int n1, int n2) {
	for (int i = 0; i < n1; i++) {
		v[i] = (char**)malloc(n2 * sizeof(char*));
		if (v[i] == NULL) {
			printf("Memoria insuficiente.\n");
			exit(1);
		}
	}
	return;
}

int main(void) {
	FILE* f;

	char alfab[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* obras[100];
	char* autores[100];
	f = fopen("livros.txt", "r");
	if (f == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	alocaMemoria(obras, 100, 127);
	alocaMemoria(autores, 100, 127);
	while (!feof(f)) {
		fscanf
	}
}
