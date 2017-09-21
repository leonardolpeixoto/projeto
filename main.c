#include "./biblioteca/projeto.c"

int main(){


	Matriz a;
	Matriz b;
	
	FILE *A = fopen("a.txt", "r");
	FILE *B = fopen("b.txt", "r");
	
	//Verifica se houve a algum erro na abertura do arquivo. Se sim, termina a excução do programa.
	if(A == NULL && B == NULL){
		printf("Problema na abertura dos arquivos\n");
		exit(EXIT_FAILURE);
	}
	
	a = getMatriz(A);
	b = getMatriz(B);

	multiplicaMatriz(a, b);
	
	fclose(A);
	fclose(B);
	
	return 0;
}