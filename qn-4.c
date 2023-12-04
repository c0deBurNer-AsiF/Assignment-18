//4. Write a function to transform string into uppercase


#include<stdio.h>
void uppercase(char []);
int main()
{
    char x[100];
    uppercase(x);

}
void uppercase(char str[])
{
    int i;
    printf("enter words or sentences:");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;

        }

    }
    printf("%s",str);

}
