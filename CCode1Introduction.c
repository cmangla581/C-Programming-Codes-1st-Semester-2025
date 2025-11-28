# include <stdio.h>
int main()
{
    char name[50];
    char college [50];
    int age;
    char Enum[50];

    printf ("Enter your name\n");
    scanf ("%s", &name);
    printf ("Your name is %s\n", name);

    printf ("Enter the college name\n");
    scanf ("%s", &college);
    printf ("Your college name is %s\n", college);

    printf("Enter your age\n");
    scanf ("%d", &age);
    printf ("Your age is %d\n", age);

    printf ("Enter your enrollment number\n");
    scanf ("%s", &Enum);
    printf ("Your enrollment number is %s\n", Enum);

    return 0; 
}