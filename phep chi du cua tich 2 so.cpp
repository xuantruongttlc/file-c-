#include<iostream>
using namespace std;
typedef long long ll;
ll tinh(ll a, ll b, ll p){
    if (a==0 || b==0) return 0;
    ll t=tinh(a,b/2,p);
    if (b%2==0) return (2*(t%p))%p;
    else return (a%p+2*(t%p))%p;
}
main(){
    int t; 
	cin >> t;
    while(t--){
        ll a, b, p;
        cin >> a >> b >> p;
        cout << tinh(a, b, p) << endl;
    }
}
