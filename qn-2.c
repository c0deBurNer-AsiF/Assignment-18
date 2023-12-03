//2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>
void reverse(char []);
int main()
{
    char x[100];
    reverse(x);
    return 0;
}
void reverse(char str[])
{
    int i,j=0;
    printf("enter words or sentences:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
        j++;

    for(i=j-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
