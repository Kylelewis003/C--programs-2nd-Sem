#include<stdio.h>

int str_length(char[]);
int str_compare(char[] , char[]);
void str_concat(char[] , char[]);

int main()
{
    char str[50];
    char str1[50] , str2[50];
    char str3[100] , str4[50];

    int length , comp_res;

    printf("Enter string to find length of : \n");
    gets(str);

    length = str_length(str);

    printf("The length of %s is %d\n",str,length);

    printf("Enter two strings for string compare : \n");
    gets(str1);
    gets(str2);

    comp_res = str_compare(str1 , str2);

    if(comp_res < 0 )
    {  
        printf("String %s is less than string %s \n",str1,str2);
    }
    else if (comp_res == 0)
    {
        printf("String %s is same as string %s \n",str1,str2);
    }
    else
    {
        printf("String %s is greater than string %s \n",str1,str2);
    }

    printf("Enter two strings for string concatenation : \n");
    gets(str3);
    gets(str4);

    str_concat(str3 , str4);

    printf("The strings after concatenation is %s\n",str3);

    return 0;
}
int str_length (char s[])
{
    int i ;
    for(i = 0 ; s[i]!='\0' ; i++);
    return i;
}
int str_compare(char s1[] , char s2[])
{
    int i;
    for(i = 0 ; s1[i]!='\0' && s2[i]!='\0' ; i++)
    {
        if(s1[i]!=s2[i])
        {
            return (s1[i] - s2[i]);
        }
    }
    return (s1[i] - s2[i]);
}
void str_concat(char s3[] , char s4[])
{
    int i,j;
    for(i = 0 ; s3[i]!='\0' ; i++);
    {
        for(j = 0 ; s4[j]!='\0' ; i++, j++)
        {
            s3[i] = s4[j];
        }
        s3[i] = '\0';
    }
}
