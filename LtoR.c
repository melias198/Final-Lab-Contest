#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {
    int l, r;
    scanf("%d %d", &l, &r);
    for (int i=l;i<= r;i++)
    {
        int flag = i;
        for (int j=2;j<i;j++)
        {
            if (flag%j==0)
            {
                flag = 0;
                break;
            }
        }
        if (flag > 0)
        {
            printf("%d ",flag);
        }
    }
    printf("\n");
    }

    return 0;
}
