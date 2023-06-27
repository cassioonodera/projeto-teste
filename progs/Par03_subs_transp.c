#include <stdio.h>

void main() {
	
	int opc, x;
	char mensagem[100];
	char msgCifrada[100];
	
	do {
		system("cls");
		printf("=====> CRIPTOGRAFIA - MENU \n\n");
		printf("          1 - Substituicao - cifra\n");
		printf("          2 - Substituicao - decifra\n");
		printf("          3 - Transposicao - cifra\n");
		printf("          4 - Transposicao - decifra\n");
		printf("          0 - Sai do programa\n");
		printf("              Opcao: ");
		scanf("%d",&opc);
		fflush(stdin);
		
		switch (opc) {
			case 1:
				printf("\n\nSUBSTITUICAO - CIFRA\n");
				printf("\n\nMensagem original: ");
				gets(mensagem);
				for(x=0;x<strlen(mensagem);x++) {
					//verifica se é letra maiuscula
					if(mensagem[x]>=65 && mensagem[x]<=90) {
						msgCifrada[x] = mensagem[x] + 1;
						if(msgCifrada[x]>90) msgCifrada[x] = 65;
					}
					//verifica se é letra minuscula
					if(mensagem[x]>=97 && mensagem[x]<=122) {
						msgCifrada[x] = mensagem[x] + 1;
						if(msgCifrada[x]>122) msgCifrada[x] = 97;
					}
				}
				msgCifrada[x] = mensagem[x];
				printf("Mensagem cifrada: %s\n",msgCifrada);
				getch();
				break;
			case 2:
				printf("\n\nSUBSTITUICAO - DECIFRA\n");
				printf("\n\nMensagem cifrada: ");
				gets(mensagem);
				for(x=0;x<strlen(mensagem);x++) {
					//verifica se é letra maiuscula
					if(mensagem[x]>=65 && mensagem[x]<=90) {
						msgCifrada[x] = mensagem[x] - 1;
						if(msgCifrada[x]<65) msgCifrada[x] = 90;
					}
					//verifica se é letra minuscula
					if(mensagem[x]>=97 && mensagem[x]<=122) {
						msgCifrada[x] = mensagem[x] - 1;
						if(msgCifrada[x]<97) msgCifrada[x] = 122;
					}
				}
				msgCifrada[x] = mensagem[x];
				printf("Mensagem original: %s\n",msgCifrada);
				getch();
				break;
			case 3:
				printf("\n\nTRANSPOSICAO - CIFRA\n");
				printf("\n\nMensagem original: ");
				gets(mensagem);
				x = 0;
				while(x<strlen(mensagem)) {
					// verifica se existe o próximo caracter
					if((x+1) < strlen(mensagem)) {
						msgCifrada[x] = mensagem[x+1];
						msgCifrada[x+1] = mensagem[x];
					}
					else {
						msgCifrada[x] = mensagem[x];						
					}
					x = x + 2;
				}
				x = strlen(mensagem);
				msgCifrada[x] = mensagem[x];
				printf("Mensagem cifrada: %s\n",msgCifrada);
				getch();
				break;
			case 4:
				printf("\n\nTRANSPOSICAO - DECIFRA\n");
				printf("\n\nMensagem cifrada: ");
				gets(mensagem);
				x = 0;
				while(x<strlen(mensagem)) {
					// verifica se existe o próximo caracter
					if((x+1) < strlen(mensagem)) {
						msgCifrada[x] = mensagem[x+1];
						msgCifrada[x+1] = mensagem[x];
					}
					else {
						msgCifrada[x] = mensagem[x];						
					}
					x = x + 2;
				}
				x = strlen(mensagem);
				msgCifrada[x] = mensagem[x];
				printf("Mensagem original: %s\n",msgCifrada);
				getch();
				break;
			case 0:
				printf("\n\n===> Obrigado por usar o programa.\n");
				break;
		}
		
		
	} while (opc != 0); 
	
}


