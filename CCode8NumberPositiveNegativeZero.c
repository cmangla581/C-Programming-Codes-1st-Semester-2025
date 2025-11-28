# include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");

    scanf("%d",  &num);

    if (num > 0) {printf("The number is positive");}

    else if (num < 0) {printf("The number is negaive");}

    else {printf("The number is 0");}

    return 0; 
}