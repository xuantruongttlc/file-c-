#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    long long m,n;
    cin >> m >> n;
    string s;
    cin >> s;
    int a[m+1] ;
    for(int i = 1 ; i <= m ; i++ )
    {
        a[i] = (int)(s[i-1]-'0');
    }
    vector<vector<long long> > f(n+200,vector<long long>(m+200,0));
    for(int i = 1 ; i <= m ; i++ )
    {
        f[i][a[i]%n] = 1;
        for(int j = 1 ; j < i ; j++ )
        {
            for(int k = 0 ; k <= n ; k++ )
            {
                long long  ts = f[j][k] ;
                long long data = (k*10+a[i])%n;
                if( ts != 0 )
                    f[i][data] += ts;
            }
        }
    }

    long long dem = 0;
    for(int i = 1 ; i <= m ; i++ )
    {
        dem += f[i][0] ;
        dem += f[i][n] ;
    }
    cout << dem << endl;
}

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        solve();
    }
}
