# include <stdio.h>
# include <math.h>
int main()
{
    float P,R,T,SI,CI;

    printf ("Enter the Principal\n");
    scanf ("%f", &P);

    printf ("Enter the Rate of Intrest\n");
    scanf ("%f", &R);

    printf ("ENter the time period\n");
    scanf ("%f", &T);

    SI = (P*R*T) / 100 ;
    CI = P * pow((1 + R/100), T) - P ;
    
    printf ("The Simple Intrest is %f\n", SI);

    printf ("The Compund Intrest is %f\n", CI);

    return 0; 
}