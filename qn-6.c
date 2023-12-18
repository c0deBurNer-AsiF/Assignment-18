/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include<stdio.h>
void alphneu(char []);
int main()
{
    char y[30];

     alphneu(y);
     return 0;


}
void alphneu(char x[])
{
    int i,j,m,k=0;

    char a[2][60]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ","0123456789"};
    printf("enter a word:\n");
    gets(x);

   for(i=0;i<2;i++)
   {
       for(j=0;x[j];j++)
       {
           for(m=0;a[i][m];m++)
           {
               if(x[j]==a[i][m])
               {
                k++;
                break;
               }

           }
           if(x[j]==a[i][m])
            break;
       }
       if(x[j]!=a[i][m])
        break;

   }
   if(k==2)
    printf("Its a alphaneumeric word");
   else
    printf("Its not a alphaneumeric word");
}
