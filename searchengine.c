#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int s;
    scanf("%d",&s);
    int index=0;
    for(int i=1;i<=n;i++)
    {
        if(arra[i]==s)
       {
        index=i;
        break;
       }
    }
    if(index>0)
    printf("Case %d: %d\n",j,index);
    else
    printf("Case %d: Not Found\n",j);
    }
    return 0;
}

