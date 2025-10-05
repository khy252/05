#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int a,b;
    char op;
    int result;
    
    printf("enter the calculation :");
    scanf("%i%c%i", &a, &op, &b);
    
    if (op == '+')
        result = a+b;
    else if (op == '-')
        result = a-b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;

    
    
    printf("= %i", result);
    
    system("PAUSE");	
    return 0;
}
