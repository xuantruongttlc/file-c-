#include<bits/stdc++.h>
#include<sstream>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
		
	public:
		PhanSo(long long t, long long mau){
			this ->tu = tu;
			this -> mau = mau;
		}
		void rutgon(){
			long long x = __gcd(tu,mau);
			tu /= x;
			mau /= x;
		}
		friend istream &operator >> (istream &is, PhanSo &p){
			is >> p.tu >> p.mau;
			return is;
		}
		friend ostream &operator << (ostream &os, PhanSo &p){
			os << p.tu <<"/" << p.mau;
			return os; 
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
