   /* Luan Samuel Lopes Mendes 
11621ETE016


*/
#include <stdio.h>

int soma(int quant, int vet[])
{

	if(quant == 0)
		return 0;
	else
	{	
		int s;
    	s = soma (quant-1, vet);
    	if (vet[quant-1] > 0) 
			s = s + vet[quant-1];
    	return (s);
   }
}
float media(int quant, int soma)
{
	return soma/quant;
}
int main()
{
	int num=0, vet[20], i, somatorio;
	for(i=0; i<20; i++)
		vet[i]=0;
	do
	{
		printf("Digite a quantidade de numeros: ");
		scanf("%d", &num);
		getchar();
	}while(num<5 && num>20);
	for(i=0; i<num; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &vet[i]);
		getchar();
	}
	somatorio = soma(num, vet);
	printf("Somatorio: %d\nMedia: %f", somatorio, media(num, somatorio));
	return 0;
}
