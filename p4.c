#include <stdio.h>

int main(int ab, char ** ac) 
{
	
	

    char numero[256];
	
    int y=0,a;
	
    printf("Digite a string\n");
	
    scanf("%s",&numero);
	
    while(numero[y]!='\0')
{
		
         a=48;
		
         while(a>=48 && a<=57){
			
              if(numero[y]==a) printf("%c",numero[y]);
			
              a++;
		
         }
		
         y++;
	
     }

}