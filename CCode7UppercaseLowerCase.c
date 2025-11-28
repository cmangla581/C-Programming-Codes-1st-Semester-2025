# include <stdio.h>
int main()
{
    char character;
    printf("Enter the character");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z')
      {printf("Its an Upper Case Alphabet");}


    else if (character >= 'a' && character <= 'z') 
    {printf("Its a lower case alphabet");}

    else{printf("Its not a charcter");}

    return 0; 
}