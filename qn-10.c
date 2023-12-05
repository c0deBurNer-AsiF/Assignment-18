//10. Write a function to find the repeated character in a given string.


#include<stdio.h>
void repeat(char [], char []);
int main()
{
    char x[255]={0};
    char y[100];
    repeat(x,y);
    return 0;
}
void repeat(char k[], char str[])
{
    int i;
    printf("enter words or sentences:");
    gets(str);

    for(i=0;str[i];i++)
        k[str[i]]++;

    printf("repeated character in this strings:\n");
    for(i=0;i<256;i++)
    {
        if(k[i]!=0 && k[i]!=1)
        printf("%c\n",i);
    }
}
