#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
 
vector<bool> check(1e6+5,true);
vector<int> dem(1e6+5,0);
int main()
{
    int n , k , b , a , min = INT_MAX ;
    cin >> n >> k >> b ;
    for(int i = 1 ; i <= b ; i++ )
    {
        cin >> a ;
        check[a] = false ;
    }
    for(int i = 1 ; i <= n ; i++ )
    {
        dem[i] = dem[i-1] ;
        if( check[i] == false ) dem[i]++;
    }
    for(int i = k ; i <= n ; i++ )
    {
        if( min > dem[i]-dem[i-k] ) min = dem[i] - dem[i-k] ;
    }
    cout << min ;
}