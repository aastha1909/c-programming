#include<stdio.h>

int palindrom(char*p);
void mian()
/////////////////function definition
{
    char str[100];
    int c;
    printf("enter a string");
    gets(str);

///////////////function call
    c = palindrom(&str[0]);
    if(c==1)
        printf(palindrom);
    else
        printf("not a palindrom");    
}
///////////////////main function

        int palindrom (char*p)
       {
        int i,j,len=0,flag=1;
         for(i=0;*(p+i)!="\0";i++) 
           {
            len=len+1
           } 
            if(i=0;1=len-i;i<j;l++,j--)
              {
                if(*(p+i)!=*(p+1))
                {
                    flag=0;
                    break;
            
                }
    
              }
              return flag ;

       } 
  