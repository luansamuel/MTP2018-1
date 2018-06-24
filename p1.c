    /* Luan Samuel Lopes Mendes 
11621ETE016


*/



#include  < stdio.h >

int  main () {
    int estado = 0 , i, a = 0 ;
    bits de char [ 256 ], ibits [ 256 ];
    printf ( " Por favor, digite uma sequencia de 1's e 0's: " );
    fflush (stdin);
    scanf ( " % s " , ( char *) e bits);
    para (i = 0 ; bits [i]! = ' \ 0 ' ; i ++) {
        a + = 1 ;
    }
    para (i = a- 1 ; i> = 0 ; i -) {
        ibits [a- 1 -i] = bits [i];
    }
    ibits [a] = ' \ 0 ' ;
    i = 0 ;
    while (ibits [i]! = ' \ 0 ' ) {
        if (estado == 0 ) {
            if (ibits [i] == ' 1 ' )
                estado + = 1 ;
        } else  if (estado == 1 ) {
            if (ibits [i] == ' 0 ' ) {
                estado + = 1 ;
            } mais {
                estado- = 1 ;
            }
        } mais {
            if (ibits [i] == ' 0 ' )
                estado- = 1 ;
        }
        i + = 1 ;
    }
    printf ( " Estado: % d \ n Uma sequencia % s  % s eh multipla de 3 " , estado, bits, (estado! = 0 ? " nao " : " " ));
    return  0 ;
}
