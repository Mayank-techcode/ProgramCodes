#include<stdio.h>

void UpdateString(char *str)
{
    while(*str != '\0')
    {
        
        str++;
    }
    
}

int main()
{
    char Arr[100];
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);
    
    printf("Updated String is %s",Arr);

    return 0;
}