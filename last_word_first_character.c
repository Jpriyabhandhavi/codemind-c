#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    scanf("%[^
]s",str);
    //printf("%s",str);
    int l=strlen(str);
    c=str[0];
    for(int i=0;i<l-2;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        c=str[i+1];
    }
    printf("%c",c);
}