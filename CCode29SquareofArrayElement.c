# include <stdio.h>
int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof (numbers)/sizeof (numbers[0]);

    for(int i = 0; i<size ; i++) {
        int square = numbers [i] *  numbers[i]; 
        printf("The square of %d is %d\n",numbers[i],square);
    }
    return 0; 
}