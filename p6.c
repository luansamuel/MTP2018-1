   /* Luan Samuel Lopes Mendes 
11621ETE016


*/
#include <stdio.h>

float media(int soma, float n){
	float mediaDivisao;
	mediaDivisao = soma/n;
	return mediaDivisao;
}

int numerovetor(int vet[20], int n) {
   	int i, soma=0;
   	for (i=0;i<n;i++)
    {
    	soma+=vet[i];
	}
      return (soma);
    }

int main()
{

	int i, num[20], soma, n;

	do
	{
		printf("Quantidade de numeros para fazer a media:");
		scanf("%d",&n);
    }
    while(n<5||n>20);

	for(i=0; i<20; i++){num[i] = 0;}

	for(i=0; i<n; i++)
	{
    printf("\n %d numero: ", i+1);
    scanf("%d", &num[i]);
    getchar();
	}
	soma = (numerovetor(num, i));

	printf("\nMedia - %f", media(soma, n));

	return 0;
	}
