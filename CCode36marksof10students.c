# include <stdio.h>
# include <string.h>

struct Student {
    char name [50];
    int marks ;
    char dob[15];

};

int main()
{
    struct Student s[10];
    int i, highestMarks = 0; 

    for (i = 0; i< 10; i++)
    {
        printf("Enter details of student %d:\n", i+1);
        printf(" Name:");
        printf("%[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
        printf("Date of Birth (DD/MM/YYYY): ");
        scanf("%[^\n]", s[i].dob);

        if (s[i].marks > highestMarks)
        highestMarks = s[i].marks ;

    }

    printf("Student(s) with Highest marks\n");
    for (i+0; i<10 ; i++)
    {
        if (s[i].marks == highestMarks) {
            printf("Name:%s\n", s[i].name);
            printf("Marks:%d\nb", s[i].marks);
            printf("Date of Birth; %s\n", s[i].dob);


        }
    }
    return 0; 
}
