#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character : \n");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("Given Character is a Alphabet");
    }
    else
    {
        printf("Given character is not a Alphabet");
    }

    return 0;
}