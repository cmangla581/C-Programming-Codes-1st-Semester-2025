# include <stdio.h>
int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d", &num);

    if (num %2 ==0) {printf("Its an even number");}

    else {printf("Its an odd number");}

    return 0; 
}
