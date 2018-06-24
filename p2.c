    /* Luan Samuel Lopes Mendes 
11621ETE016


*/


#define ALMOSTZERO 0.0000000000000000001
#include <stdio.h>

char l[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int getValue(char c){
    int i;
    if(c>='a' && c<='f')
        c-=32;
    for(i=0; l[i]!=c; i++);
    return i;
}

int strsize(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}

int mpow(int base, int e){
    int res = 1;
    for(; e>0; res*=base, e--);
    return res;
}

double ln(double x){
    double sum = 0.0, xmlxpl = (x - 1) / (x + 1), denom = 1.0,frac = xmlxpl, term = frac / denom;
    while (term > ALMOSTZERO){
        sum += term;
        denom += 2.0;
        frac = frac * xmlxpl * xmlxpl;
        term = frac / denom;
    }
    return 2.0 * sum;
}

double logbase(double base, double x){
    return ln(x)/ln(base);
}

int baseToDec(int base, char *val){
    int len = strsize(val) -1, res=0, i;
    for(i=len; i>=0; i--){
        res += getValue(val[i])*mpow(base, (len-i));
    }
    return res;
}

void decToBase(int dec, int base){
    int r, size = logbase(base, dec) + 2, i;
    char res[size+1], tmp[size+1];
	for(i=0; i<=size; tmp[i]='0', i++);
	i=0;
    while(dec != 0){
        r = dec%base;
        dec = dec/base;
        tmp[i++] = l[r];
    }
    for(i=size; i>=0; i--){
		res[size-i] = tmp[(tmp[size]=='0' && tmp[size-1]=='0'?i-2:i-1)];
    }
    res[((res[size-1]!='0' || res[size-1] != '1')?size-1:size)] = '\0';
    printf("%s", res);
}

int main(){
    char inpt[256];
    int opt = -1, exit=0;
    while(exit==0){
        while(!(opt>=1 && opt<=9)){
            printf("\n\n=-=-=-=-=-=-=Menu=-=-=-=-=-=-=\n");
            printf("1 - Bin para Dec\n2 - Bin para Hex\n3 - Hex para Dec\n4 - Hex para Bin\n5 - Dec para Bin\n6 - Dec para Hex\n7 - Oct para Dec\n8 - Dec para Oct\n9 - Sair");
            printf("\n\nEscolha a opcao> ");
            scanf("%d", &opt);
			getchar();
        }
        switch(opt){
            case 1:
                printf("\nDigite o valor em binario(sem espacos): ");
                scanf("%s", (char*)&inpt);
                printf("%d", baseToDec(2, inpt));
                break;
            case 2:
                printf("Digite o valor em binario(sem espacos): ");
		scanf("%s", (char*)&inpt);
		decToBase(baseToDec(2, inpt), 16);
                break;
            case 3:
		printf("\nDigite o valor em hexadecimal(sem usar 0x no comeco): ");
                scanf("%s", (char*)&inpt);
                printf("%d", baseToDec(16, inpt));
                break;
            case 4:
		printf("\nDigite o valor em hexadecimal(sem usar 0x no comeco): ");
		scanf("%s", (char*)&inpt);
		decToBase(baseToDec(16, inpt), 2);
                break;
            case 5:
		printf("\nDigite o valor em decimal: ");
		scanf("%s", (char*)&inpt);
		decToBase(baseToDec(10, inpt), 2);
                break;
            case 6:
		printf("\nDigite o valor em decimal: ");
		scanf("%s", (char*)&inpt);
		decToBase(baseToDec(10, inpt), 16);
                break;
            case 7:
		printf("\nDigite o valor em octal: ");
		scanf("%s", (char*)&inpt);
		printf("%d", baseToDec(8, inpt));
                break;
            case 8:
		printf("\nDigite o valor em decimal: ");
		scanf("%s", (char*)&inpt);
		decToBase(baseToDec(10, inpt), 8);
                break;
            case 9:
                exit = 1;
                break;
        }
		if(opt!=9){
			printf("\nPrecione uma tecla para continuar...");
			getchar();
			getchar();
		}
		opt = -1;
    }
    printf("\nAte mais!");
    return 0;
}
