#include<iostream>
using namespace std;

struct NhanVien{
	string ten;
	string gt;
	string age;
	string diachi;
	string ma;
	string hd;
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	fflush(stdin);
	getline(cin,a.gt);
	fflush(stdin);
	getline(cin,a.age);
	fflush(stdin);
	getline(cin,a.diachi);
	fflush(stdin);
	getline(cin,a.ma);
	fflush(stdin);
	getline(cin,a.hd);
	fflush(stdin);
}
void in(NhanVien &a){
	cout <<"00001 " << a.ten <<" "<< a.gt << " " << a.age <<" "<< a.diachi <<" " << a.ma <<" " << a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
