#include <stdio.h>
	
	int j, i,a,ar;
	FILE * f;
	
	void fig1(int a){
		for (i=0;i<=a;i++){
			for(j=0 ; j<i;j++){
				printf("*");
			}
		printf("\n");
	}
	}
	
	
	int main(){
		printf(" \n FIGURA 1: \n");
		f = fopen("prueba.txt", "r");
		if (f == NULL){
			printf("\n No se pudo abrir el archivo VERIFIQUE!!. \n\n");
        }else{
        	while(feof(f) == 0){
        		fscanf( f, " %d", &a);
				printf (" \n ASTERISCOS %d", a);
				fig1(a);
				}
				
		}
		
fclose(f);
return 0;

}

 
