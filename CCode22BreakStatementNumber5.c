# include <stdio.h>
int main()
{
    int i ;
    for (i=1; i<=10; i++) {
        if (i ==5){break;}
        printf("%d", i);
    }

    printf("\nLoop was terminated when number 5 was reached\n");
    return 0; 
}