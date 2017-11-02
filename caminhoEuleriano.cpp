#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,grau;
	int total =0;

	printf("Informe o numero de vertices: ");
	scanf("%d", &n);

	int A[n][n];

	for(i=0;i<n;i++){
		for(j=0; j<n; j++){
			printf("Informe o elemento da matriz para a posicao [%d]X[%d]: ", 1+i, j+1);
			scanf("%d", &A[i][j]);
		}
	}

    printf("A matriz informada e:\n");
	for(i=0;i<n;i++){
		for(j=0; j<n; j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	do{
		grau = 0;

		for(i=0;i<n;i++){
			for(j=0; j<n; j++){
				grau += A[i][j];
			}
			if(grau % 2 != 0){
				total +=1;
			}
		}		
	}while( total <=2 && i<n);

	if((total>2) || (i<n)){
		printf("Nao existe caminho euleriano para a matriz informada\n\n\n");
	}else{
		printf("Existe caminho euleriano para a matriz informada\n\n\n");
	}

	system("pause");
}
