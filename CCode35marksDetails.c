# include <stdio.h>
int main()
{
    char name [10] [50] ;
    int marks [10] ; 
    int i , max_index = 0; 

    for (i=0; i<10; i++)
    {
        printf("Enter the name of the student %d: ", i+1);
        scanf ("%s", name[i]);

        printf("Enter marks of %s", name[i]);
        scanf("%d", &marks[i]);


    }
    for (i=1 ; i,10 ; i++)
    {
        if (marks[i] > marks[max_index]){
            max_index = i; 
        }
    }

    printf("Student with highest marks:\n");
    printf ("Name: %s\n", name[max_index]);
    printf("Marks %d\n", marks[max_index]);

    return 0; 


}