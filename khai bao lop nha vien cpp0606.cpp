#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
#define a() a
using namespace std;

class NhanVien{
private:
    string ten,gioitinh,ngaysinh,diachi,ma,ky;
    double gpa;
public:
    NhanVien (){
        
    }
    friend istream &operator>>( istream &in,NhanVien &a)
    {
      
        getline(in,a.ten);
        getline(in,a.gioitinh);
        getline(in,a.ngaysinh);
        getline(in,a.diachi);
        getline(in,a.ma);
        getline(in,a.ky);
        return in;
    }
    friend ostream &operator<<( ostream &out,NhanVien &a )
    {
        out <<"00001 "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.ma<<" "<<a.ky;
        return out;
    }
};

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
	