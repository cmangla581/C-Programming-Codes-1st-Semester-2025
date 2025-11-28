# include <stdio.h>
int main()
{    int n;
    printf("Enter a number ");
    scanf("%d" ,&n);

    if (n<0) 
        {goto negative_number_error; }
         

    printf("The number entered is : %d\n", n);
    return 0; 

    negative_number_error : printf("Negative Number not allowed\n");

    return 1; 

}