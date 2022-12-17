#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    char s[100000];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=n-1;i>=0;i--)
    {
     printf("%c",s[i]+16);
    }

/*
for(int i=0;i<n;i++)
    {
        printf("%c",s[i]+16);
    }
    printf("\n");
    }

*/
    }
    return 0;
}

