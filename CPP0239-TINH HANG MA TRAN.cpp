#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[100][100];
        for(int i=0; i<n ; i++)
        {
            for(int j=0; j<m ; j++)
                cin>>a[i][j];
        }
        int i=0,j=0,k,t,hang,luu;
        while(i<n&&j<m)
        {
            if(a[i][j]==0)
            {
             for(t=i+1;t<n;t++)
                if(a[t][j]!=0)
                {
                    for(k=i;k<m;k++)
                   {
                       swap(a[t][k],a[i][k]);
                   }
                   break;
                }
                if(t==n)j++;
            }
            if(a[i][j]!=0)
            {
                for(t=i+1;t<n;t++)
                if(a[t][j]!=0)
                {
                   luu=a[t][j];
                   for(k=j;k<m;k++)
                    a[t][k]=a[t][k]-a[i][k]*luu/a[i][j];
                }
                i++;j++;
            }
        }
        hang =n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                if(a[i][j]!=0)break;
                if(j==m)hang--;
        }
        cout<<hang<<endl;
    }
}


