#include<stdio.h>
#include<string.h>
int str_compare(char s1[], char s2[])
 {
 	int i , flag = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
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
        return flag;
    }
 }

 int main()
 {
    char str1[50], str2[50];
    int comp_res;
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
 }