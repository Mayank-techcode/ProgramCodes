#include<stdio.h>

int main()
{
    int no = 21;

    printf("Decimal : %d\n",no);
    printf("Octal : %o\n",no);    
    printf("HexaDecimal : %x\n",no);

    return 0;
}

/*
    Numbering Systems

________________________________________________________________________________
    Name            Base        Range            Values       
________________________________________________________________________________
                 
    Decimal         10          0 to 9          0 1 2 3 4 5 6 7 8 9      

    Octal           8           0 to 7          0 1 2 3 4 5 6 7 

    HexaDecimal     16          0 to 15         0 1 2 3 4 5 6 7 8 9 a b c d e f
                            (0 to 9)(A to F)

    Binary          2           0 to 1          0 1
________________________________________________________________________________

*/