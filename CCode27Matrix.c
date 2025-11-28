# include <stdio.h>
int main()
{
    int matrix[2][2] ; 
    int transpose [2] [2] ; 

    printf("Enter the element of 2x2 matrix: \n");

    for (int i = 0; i <2 ; i++) {
        for (int j = 0; j<2; j++) {
            printf("Enter the element matrix[%d][%d]", i,j);

            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("\n Original Matrix\n");

    for (int i = 0; i <2; i++){
        for (int j = 0; j<2; j++) {printf("%d", matrix[i][j]);
        
                                  }
                                  printf("\n");


    } 
    return 0; 
}