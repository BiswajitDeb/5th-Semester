#include<stdio.h>
#include<stdbool.h>
int main()
{
    int size=200;
    bool comment=false;
    char str[size];
    printf("Enter a string : ");
    gets(str);
    printf("The given string is : ");
    printf("%s",str);

    if(str[0]=='/' && str[1]=='/')
        comment=true;

    else if(str[0]=='/' && str[1]=='*')
        {
            for(int i=2;i<size;i++)
            {
                if(str[i]=='*' && str[i+1]=='/')
                    comment=true;
            }
        }



    if(comment==false)  printf("\nThe input is not a comment");
    else printf("\nThe input is a comment");
}
