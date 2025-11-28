# include <stdio.h>
int main()
{
    char operator ;
    int num1, num2;

    printf("Enter an operator (+,-,*,/):");

    scanf("%c", &operator);

    printf("Enter the number:");


    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+' :
        printf("%d + %d = %d\n", num1 , num2, num1 + num2);
    
    break;

    case '-' :
    printf("%d - %d = %d\n", num1, num2, num1-num2);

    break;

    case '*' :
    printf("%d * %d = %d\n", num1 , num2, num1*num2);

    break; 

    case '/' :
    if (num2 != 0)
    {printf("%d / %d = %d\n", num1 , num2 , num1 / num2);}

    else {printf ("Division by zero is not possible\n");}

    break ;

}
return 0; 
}