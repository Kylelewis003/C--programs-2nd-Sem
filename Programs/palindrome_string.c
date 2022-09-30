#include<stdio.h>
#include<string.h>

int main()
{
    char s[13000];
    int i,n;
    int flag = 0;

    printf("Enter the String : \n");
    gets(s);

    n = strlen(s);

    for(i = 0; i<n ; i++)
    {
        if(s[i] != s[n-i-1])
        {
            flag = 1;
            break;

        }
    }

    if(flag == 1)
    {
        printf("%s is not a palindrome ", s);
    }
    else
    {
        printf("%s is a palindrome ",s);
        
    }

    return 0;
}