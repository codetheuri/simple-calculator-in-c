#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    float a, b, result;
    char operator;
    int invalid_operator = 0;
    char input[100];
    while (1)
    {
        printf("                 A SMPLE CALCULATOR FOR ADDITON ,SUBTRACTION,MULTIPLICATION and DIVISION \n");
        printf("                          enter two numbers and an oprator in between:\n");
        // fgets(input, 100, stdin);

        if (scanf(" %f %c %f", &a, &operator, & b) != 3)
        {
            printf("                      Invalid input. Please enter two numbers and an operator in between.\n");

            return 0;
            continue;
        }
        if (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
        {
            printf("                      Invalid input. Please enter two numbers and an operator in between.\n");
            continue;
        }
        if (operator== '/' && b == 0)
        {
            printf("                       please enter a non zero number\n");
            continue;
        }

        switch (operator)
        {
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        default:
            invalid_operator = 1;
            printf("                          invalid operator");
            break;
        }
        if (invalid_operator != 1)
        {
            printf("%F %c %f is %f\n", a, operator, b, result);
        }

        char cont;
        printf("                          Do you want to continue? [y/n]\n");
        scanf("                                  %c", &cont);
        getchar();
        if (cont == 'N' || cont == 'n')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
