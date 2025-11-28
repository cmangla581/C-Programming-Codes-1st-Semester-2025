# include <stdio.h>
int main()
{
    for(int i =1; i<20; i++)
    {if (i>15) {break;}
    if (i%2 == 0) {continue;}

    printf("%d\n", i);
    }
    return 0; 
}