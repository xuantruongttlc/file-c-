#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu;
	ll mau;
};
ll usc (ll a, ll b){
	while(b >0){
		ll t = a%b;
		a = b;
		b = t;
	}
	return a;
}
void nhap(struct PhanSo &p){
	cin >> p.tu>>p.mau;
}
void rutgon( struct PhanSo &p){
	ll tu2=p.tu/usc(p.tu,p.mau);
	ll mau2=p.mau/usc(p.tu,p.mau);
	p.tu=tu2; p.mau=mau2;
}
void in(struct PhanSo &p){
	cout << p.tu << "/"<<p.mau;
}
main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
