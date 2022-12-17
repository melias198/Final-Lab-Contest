#include<stdio.h>

int main()
{
    int n;
    char s[105];
    scanf("%d",&n);
    scanf("%s",s);
    int max=26;
    int freq[max+1];
    for(int i=0;i<=max;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<strlen(s);i++)
    {
        freq[(s[i]-'a')+1]++;
    }
    int unique=0;
    for(int i=0;i<=max;i++)
    {
        if(freq[i]==1)
        {
            unique++;
        }
    }
    printf("%d\n",unique);
   
    return 0;
}

