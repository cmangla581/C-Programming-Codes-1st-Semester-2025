// Write a program to enter a number and print the reverse of it 
# include <stdio.h>
static int reversed_num = 0 ;
void reverseNumberRecursive (int num) {
    if (num ==0){
        return ;
    }
    int digit = num % 10;

    reversed_num = reversed_num *10 +digit ;

    reverseNumberRecursive(num/10);

}
int main (){
    int original_num ;
    printf("Enter an integer ");
    scanf("%d", &original_num);

    reverseNumberRecursive(original_num);

    printf("ReversedNumber: %d\n", reversed_num);
    return 0; 
}