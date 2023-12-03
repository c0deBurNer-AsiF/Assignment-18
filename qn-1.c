//1. Write a function to calculate length of the string


#include<stdio.h>
int length(char []);
int main()
{
    char x[100];
    int j;
    j=length(x);
    printf("length is %d",j);
}
int length(char str[])
{
    int i;
    printf("enter words or sentence:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++);
    return i-1;

}
