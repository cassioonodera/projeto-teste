#include <stdio.h>

long int valorP, valorQ, valorN, valorE, valorD, valorEuler;

void main() {
	int opc = 9;
	while(opc != 0) {
		system("cls");
		printf("Menu:\n");
		printf("  1 - Recebe primos\n");
		printf("  2 - Calcula chaves\n");
		printf("  3 - Cifra\n");
		printf("  4 - Decifra\n");
		printf("  0 - Sair\n");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:
				recebePrimos();
				break;
			case 2:
				calculaChaves();
				break;
			case 3:
				cifra();
				break;
			case 4:
				decifra();
				break;
			case 0:
				printf("tchau\n");
				break;
		}
		
	}
}

void recebePrimos() {
	printf("\n\nRecebe Primos\n");
	printf("=============\n\n");
	printf("   Valor de P: ");
	scanf("%d",&valorP);
	printf("   Valor de Q: ");
	scanf("%d",&valorQ);
	getch();
}

void calculaChaves() {
	valorN = valorP * valorQ;
	valorEuler = (valorP - 1) * (valorQ - 1);
	printf("Valor N: %d\n",valorN);
	printf("Valor Euler: %d\n",valorEuler);
	calculaE();
	printf("Valor E: %d\n",valorE);
	calculaD();
	printf("Valor D: %d\n",valorD);
	getch();
}

long int calculaMDC(long int v1, long int v2) {
    long int maior = 0;
    long int outro = 0;
    long int aux = 0;
    //console.log("mdc("+v1+","+v2+")");
    if(v1 >= 1 && v2 >= 1) {
      if(v1 > v2) { maior = v1; outro = v2; }
      else { maior = v2; outro = v1; }
      while(maior != outro && maior>0) {
        //console.log("maior: "+maior+"  outro:"+outro);
        maior = maior - outro;
        if(outro > maior) {
          aux = maior;
          maior = outro;
          outro = aux;
        }
      }
      //console.log("maior: "+maior+"  outro:"+outro);
      return maior;
    }
    else {
      return 1001;
    }
}

void calculaE() {
    long int auxMDC = 0;
    long int e_ini = (rand() % valorEuler);
    e_ini = 7;
    auxMDC = calculaMDC(valorEuler,e_ini);
    while(auxMDC>1) {
    	e_ini = e_ini - 1;
        auxMDC = calculaMDC(valorEuler,e_ini);
    }
    valorE = e_ini;
}

void calculaD() {
 	int k = 1;
    long int resto = (k * valorEuler + 1) % valorE;
    while(resto > 0) {
      k = k + 1;
      resto = (k * valorEuler + 1) % valorE;
      //console.log("Resto: "+resto);
    }
    valorD = (k * valorEuler + 1) / valorE;
}

void cifra() {
	long int valor1, valor2, k, j;
	printf("Codigo para cifrar: ");
	scanf("%d",&valor1);
	k = 1;
	for(j=0; j < valorE; j++) {
		k = k * valor1;
		k = k % valorN;
	}
	valor2 = k;
	printf("Codigo cifrado: %d\n",valor2);
	getch();
}

void decifra() {
	long int valor1, valor2, k, j;
	printf("Codigo para decifrar: ");
	scanf("%d",&valor1);
	k = 1;
	for(j=0; j < valorD; j++) {
		k = k * valor1;
		k = k % valorN;
	}
	valor2 = k;
	printf("Codigo decifrado: %d\n",valor2);
	getch();
}
