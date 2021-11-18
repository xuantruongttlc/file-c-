#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;
	string age;
	float x;
};
void nhap( SinhVien &a){
	getline(cin,a.ten);
	fflush(stdin);
	getline(cin,a.lop);
	fflush(stdin);
	getline(cin,a.age);
	cin >> a.x;
}
void in( SinhVien &a){
	cout << "B20DCCN001 ";
	cout  << a.ten <<" " << a.lop <<" " ;
	int n=a.age.length();
	if(n < 10){
		if(n==9){
			if(a.age[1] == '/') cout << 0 << a.age;
			else{
				cout << a.age[0] << a.age[1] << a.age[2] <<0;
				for(int i=3; i < n; i++) cout << a.age[i];			
			} 
		}
		else {
			cout <<0 <<a.age[0] <<a.age[1]<<0;
			for(int i=2; i < n; i++) cout << a.age[i] ;
			cout <<" ";
		}
	}
	else cout << a.age<<" ";
	cout << " "<<fixed << setprecision(2) << a.x << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
