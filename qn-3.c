//3. Write a function to compare two strings


#include<stdio.h>
void compare(char [],char []);
int main()
{
    char x[100],y[100];
    compare(x,y);
    return 0;
}
void compare(char a[],char b[])
{
    int i,j;
    printf("enter words or sentence:\n");
    fgets(a,100,stdin);

    printf("enter one more word or sentence:\n");
    fgets(b,100,stdin);

    for(i=0,j=0;a[i]&&b[j];i++,j++)
    {
        if(a[i]<b[j]||a[i]>b[j])
            break;

    }
    if(a[i]==b[j])
        printf("strings are same");
    else
        printf("strings are not same");
}
