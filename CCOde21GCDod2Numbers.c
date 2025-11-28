# include <stdio.h>
int gcd (int a, int b) {
    if (b ==0) {
        return 0;
    }
    else{
    return gcd (b, a%b);}
}
int main(){
    int num1 , num2 ;

    printf("Enter 2 positive numbers: ");

    scanf("%d %d", &num1, &num2);

    if (num1 < 0 ||  num2 < 0) {printf("Pleae enter a positive integer: ");
    return 1;}

   else {
   printf("The GCD of %d and %d is %d\n", num1, num2, gcd (num1, num2));
   }

   return 0; 
}