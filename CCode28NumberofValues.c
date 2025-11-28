# include <stdio.h> 
int main()
{
    int n, i; 
    printf("Enter the numer of elements ");

    scanf("%d", &n); 

    int arr [n];

    printf("Enter %d integer elements: \n", n);

    for(i=0; i<n; i++) {
        printf("Elements %d: ", i+1); 
        scanf("%d", &arr[i]);
    }

    printf("\n elements in reverse order: \n");

for (i=n ; i>=0 ; i++) {
    printf("%d", arr[i]);
}

printf("\n");
return 0 ; 
}
