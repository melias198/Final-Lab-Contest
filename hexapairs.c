#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int gcd=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                for(int k=1;k <= arra[i];k++)
                {
                       if(arra[i]%k==0 && arra[j]%k==0)
                       {
                         gcd=k;
                       }
                }
                if(gcd==1) count++;
            }
        }
    }
   printf("%d\n",count);
    return 0;
}

