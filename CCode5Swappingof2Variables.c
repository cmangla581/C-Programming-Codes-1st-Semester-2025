# include <stdio.h>
int main()
{
    int a,b,c ;
    printf ("Enter a Number in a", &a);
    scanf("%d", &a);

    printf("Enter a number in b");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c; 

    printf("Now A is %d and B is %d", a, b);

    return 0; 

}