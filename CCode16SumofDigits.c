# include <stdio.h>
int main()
{
    int n;
    int sum = 0; 
    int i ;
    printf("Enter the number");
    scanf("%d", &n);

    for (int i =1; i<=n; i++)
    {
        sum = sum +i;

    }
    printf("Sum is %d", sum);
    return 0; 
}