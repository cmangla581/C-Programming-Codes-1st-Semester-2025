# include <stdio.h>
# include <math.h>

int main()
{
    float F,C ;

    printf("Enter the Temperature in Celsius\n");

    scanf("%f", &C);
    F = (C* 9/5) + 32 ; 
    printf("The temperature in Fahrenheit is %f\n", F);

    printf("Enter the temperature in Fahrenheit\n"); 
    scanf ("%f", &F);
    C = (F - 32)* 5/9 ;

    printf("The temperatue in Celsius is %f", C);

    return 0; 


}

