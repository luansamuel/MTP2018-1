    /* Luan Samuel Lopes Mendes 
11621ETE016


*/


#include <stdio.h>

int main ()
   {	
	int i=0, x=0;
	char num[300];
	
	printf("Insira uma string qualquer: \n");
	fgets(num,300,stdin);
	
	while(num[i]){
		
		if(num[i]>=48 && num[i]<=57){
			
			num[i]=num[i]-'0';
			x = x*10+num[i];
		}
		
		i++;
	}
	
	printf("String formatada: %d",x);
	
	return 0;
}
