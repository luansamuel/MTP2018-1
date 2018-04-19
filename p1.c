    /* Luan Samuel Lopes Mendes 
11621ETE016


*/


#include <stdio.h>

int main() {
    int estado=0,i;
    char bits[256];

    scanf("%s",&bits);
    while(bits[i] != '\0'){
        if(estado == 0 && bits[i] == '0'){
        estado=0;
        i++;
    } else{
            estado=1;
    }}
    printf("estado= %d \n",estado);
    printf("Sequencia original = %s ",bits);
    if(estado==0){
            printf("e multiplo de 3");
             }
    else{
         printf("nao e");
         }

    return 0;

    }
