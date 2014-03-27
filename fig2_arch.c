#include <stdio.h>
	
	int j, i,a,ar,t;
	FILE * f;

	
	void fig2(int a){
		j=a;
		t=a;
		for (i=0;i<t;i++){
			for(j=a; j>0; j--){
				printf("*");
			}
		printf("\n");
		a--;
	}
		
	}
	
	
	int main(){		
		printf(" \n FIGURA 2: \n");
		f = fopen("prueba.txt", "r");
		if (f == NULL){
			printf("\n No se pudo abrir el archivo VERIFIQUE!!. \n\n");
        }else{
        	while(feof(f) == 0){
				fscanf( f, " %d", &a);
				printf (" \n ASTERISCOS %d", a);
				printf("\n");
				fig2(a);
				}}
		
		
fclose(f);
return 0;

}

