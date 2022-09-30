#include<stdio.h>
int str_length(char[]);
int str_compare(char[],char []);
void str_concat(char[] , char[]);

int main()
{
    char str[50];
    char str1[50], str2[50];
    char str3[50] , str4[50];

    int length , comp_res;

    printf("\nEnter a string : \n");
    gets(str);

    length = str_length(str);

    printf("\nThe length of %s is %d\n",str,length);

    printf("\nEnter two strings for string compare : \n");
 	gets(str1);
 	gets(str2);

    comp_res=str_compare(str1,str2);

    if (comp_res == 1)
 	{
 		printf("\nString are different\n");
 	}
 	else if (comp_res == 0)
 	{
        printf("\nStrings are identical\n");
 	}
    else
    {
        printf("\nStrings are different\n");
    }

    printf("\nEnter two strings for string concatenation : \n");
    gets(str3);
    gets(str4);

    str_concat(str3,str4);

    printf("\nThe strings after concatenation is : %s\n",str3);

    return 1;

}
int str_length(char s[])
{
    int i;
    for(i = 0 ; s[i]!='\0' ; i++);
    {
        return i;
    }
}
int str_compare(char s1[], char s2[])
 {
 	int i , flag = 0;
    int len1,len2;
    for(len1 = 0 ; s1[len1]!= '\0' ; len1++);
    for(len2 = 0 ; s2[len2]!= '\0' ; len2++);
    
    if(len1 != len2)
    {
        return -1;
    }
 	else
    {
        for(i=0;s1[i] != '\0' && s2[i] != '\0';i++)
 	    {
 		    if (s1[i] != s2[i])
 		    {
 			    flag = 1;
                return flag;
 		    }
 	    }

    }
 }
void str_concat(char s1[] , char s2[])
{
    int i,j;
    for(i = 0 ; s1[i]!='\0' ; i++);
    {
        for(j = 0 ; s2[j]!='\0' ; j++,i++)
        {
            s1[i] = s2[j];
        }
        s1[i] = '\0';
    }
}