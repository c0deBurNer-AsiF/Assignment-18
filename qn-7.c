//7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
int main()
{
    char str[100];
    int i,j,k=0;
    printf("enter words or sentences:");
    gets(str);

    for(i=0;str[i];i++)
        k++;

    for(i=0,j=k-1;str[i] && j>=0;i++,j--)
    {
        if(str[i]!=str[j])
            break;
    }
    if(str[i]==str[j])
        printf("palindrome string");
    else
        printf("not palindrome string");

}
