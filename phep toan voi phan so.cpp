#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define quickly ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

struct PhanSo {
	ll tu,mau;
};
PhanSo cong (PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tu=a.tu*b.mau+a.mau*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}
PhanSo nhan (PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tu=a.tu*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}
void rutgon (PhanSo &a)
{
	ll x=__gcd(a.tu,a.mau);
	a.tu=a.tu/x;
	a.mau=a.mau/x;
}
void process( PhanSo a, PhanSo b) 
{
	PhanSo c=nhan(cong(a,b),cong(a,b));
	PhanSo d1=nhan(a,b);
	PhanSo d=nhan(d1,c);
	rutgon(c);
	rutgon(d);
	cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
