//Capturar un numero entero cualesquiera e informar si es o no es múltiplo de 4 
#include <iostream>
int main(int argc, char** argv) {
	int Num;
	printf("INGRESE CUALQUIER NUMERO ENTERO\n");
	scanf("%d", &Num);
	if(Num%4==0){
		printf("\nEL NUMERO ES MULTIPLO DE 4\n");
	}
	else printf("\nEL NUMERO NO ES MULTIPLO DE 4\n ");
	system("pause");
}
