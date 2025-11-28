# include <stdio.h>
int main()
{
    int numbers[5];
    int sum = 0; 
    int i ; 

    printf("Enter 5 numbers:\n ");

    for(i=0; i<5; i++)
    {
        printf("Enter the numbers %d: ", i+1);

        scanf("%d", &numbers[i]);
    }
    for (i=0 ; i<5; i++) { sum += numbers[i];}

    printf("The sum of numbers is: %d\n", sum);
    return 0; 
}