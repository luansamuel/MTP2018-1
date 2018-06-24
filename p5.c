    /* Luan Samuel Lopes Mendes 
11621ETE016


*/
#include <stdio.h>

int main(){
	int opt=-1, *p, i, vetor[63] = {0};
	char str[256] = {'\0'}, *c;
	p = (int *) str;
	c = (char*) vetor;
	while(!(opt<1 && opt>3)){
		printf("\n=-=-=-=-=-=MENU=-=-=-=-=-=\n");
		printf("1. Codificar\n2. Descodifcar\n3. Sair\n> ");
		scanf("%d",&opt);
		getchar();
		
		switch(opt){
			case 1:
				printf("\nDigite um texto: ");
				fgets(str, sizeof(str), stdin);
				for (i=0; i<sizeof(str); i++){
					printf("%i ", p[i]);
					if(p[i]==0)
						break;
				}
				printf("\n");
				break;
			case 2:
				printf("\nDigite a sequencia de numeros: ");
				for (i=0; i<sizeof(vetor)/sizeof(int); i++){
					scanf("%d", &vetor[i]);
					getchar();
					if (vetor[i]==0)
						break;
				}
				printf("\n");
				for (i=0; i<sizeof(vetor); i++)	{
					printf("%c",c[i]);
				}
				break;
			case 3:
				printf("\nAte mais!\n");
				return 0;
		}
		opt=-1;
	}
	return 0;
}
