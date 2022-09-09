#include<stdio.h>
int main()
{
    int n,m,e=0,o=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i%2==0)
            e+=arr[i][j];
            else
            o+=arr[i][j];
        }
    }
    printf("%d %d",e,o);
}
