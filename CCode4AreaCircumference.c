# include <stdio.h>
# include <math.h>
int main()
{
    float A , R , D , C ; 
    const  pi = 3.14;

    printf ("Enter the radius of circle" , R);
    scanf ("%f" , &R);

    D = 2 * R ;
    printf ("The Diameter is %f" , D);

    C = 2*pi*R ;
    printf ("The Circumference is %f" , C);

    A = pi * pow(R , 2);
    printf ("The area is %f" , A);

    return 0; 
}
