#include <stdio.h>
#include <stdlib.h>

int main()
{

    char op;
    double a;
    double b, res;

    printf("Simple Calculator:\n");
    printf("Choose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" %% : Modulus (for integers only)\n");


    printf("Enter the operator: ");
    scanf("%c", &op);

    printf("Enter the 1st Number: ");
    scanf("%lf", &a);

    printf("Enter the 2nd Number: ");
    scanf("%lf", &b);


    if(op == '+'){

        res = a + b;

        printf("Sum is: %.2lf", res);
    }
    else if( op == '-'){
        res = a - b;

        printf("Substraction is: %.2lf", res);
    }
    else {
        printf("ENter a Valid Operator");
    }





    return 0;
}
