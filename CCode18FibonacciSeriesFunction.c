# include <stdio.h>
int fibonacci (int n){

    if (n <= 1) {
        return  ;
    }
    else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}
 int main() {
    int num_terms ;

    printf("Enter the number of terms for Fibonacci Series: ");

    scanf("%d", &num_terms);

    if (num_terms <0)
    {
        printf("No. of terms cannot be negative\n");

    }
    else {
        printf("Fibonacci Series : ");
        for (int i = 0; i < num_terms; i++)
        {printf("%d", fibonacci(i));}

        printf("\n");
    }
    return 0; 
 }