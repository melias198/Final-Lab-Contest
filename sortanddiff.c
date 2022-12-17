#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arra1[n],arra2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra1[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra2[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
         if(arra1[j+1]<arra1[j])
         {
            int temp=arra1[j];
            arra1[j]=arra1[j+1];
            arra1[j+1]=temp;
         }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
         if(arra2[j+1]>arra2[j])
         {
            int temp=arra2[j];
            arra2[j]=arra2[j+1];
            arra2[j+1]=temp;
         }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arra1[i]-arra2[i]);
    }
    return 0;
}

