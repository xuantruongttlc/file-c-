#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll tu;
	ll mau;
};
void nhap( struct PhanSo &p){
	cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo &p, PhanSo &q){
	ll m=__gcd(p.mau,q.mau);
	ll bcnn=(p.mau*q.mau)/m;
	ll x1 = bcnn/p.mau;
	ll x2 = bcnn/q.mau;
	PhanSo t;
	t.tu=p.tu*x1+q.tu*x2;
	t.mau=bcnn;
	ll n=__gcd(t.tu,t.mau);
	t.tu=t.tu/n;
	t.mau=t.mau/n;
	return t;
}


void in(struct PhanSo &p){
	cout << p.tu << "/" << p.mau;
}

main(){
	struct PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
