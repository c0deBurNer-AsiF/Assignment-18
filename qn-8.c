//8. Write a function to count words in a given string


#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[200];

    printf("enter words or sentences:\n");
    gets(str);

    for(i=0; str[i];i++)
    {


            if(str[i]==' ' && str[i+1]!=' ')
            {
                if(str[i+1]!='\0')
                    count++;
            }


    }
    printf("Total words are %d",count+1);
}





//8. Write a function to count characters in a given string


/*#include<stdio.h>
void count(char [], char []);
int main()
{
    char x[255]={0};
    char y[100];
    count(x,y);
    return 0;
}
void count(char k[], char str[])
{
    int i;
    printf("enter words or sentences:");
    gets(str);

    for(i=0;str[i];i++)
        k[str[i]]++;
    for(i=0;i<256;i++)
    {
        if(k[i]!=0)
        printf("%c ==> %d times\n",i,k[i]);
    }
}*/
