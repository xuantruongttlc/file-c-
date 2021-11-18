#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n ;
    cin >> n;
    vector<long long> a(n) ;
    for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
    int l = 0 , r = n-1 , dem = 0 ;
    while( l <= r )
    {
        if( a[l] == a[r] )
        {
            l++;
            r--;
        }
        else if( a[l] < a[r] )
        {
            l++;
            a[l] += a[l-1] ;
            dem++;
        }
        else
        {
            r--;
            a[r] += a[r+1] ;
            dem++;
        }
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