/*
    @   @   @   @
    #   @   @   @
    #   #   @   @
    #   #   #   @
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    if(iRow != iCol)        // Filter
    {
        printf("Number of rows and number of columns should be same\n");
        return;
    }
    
    for(i = 1; i <= iRow; i++)          // Outer
    {   
        for(j = 1; j <= iCol; j++)    // Inner
        {
            if(i > j)
            {
                printf("#\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of Column : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);      // Display(3, 4)

    return 0;
}