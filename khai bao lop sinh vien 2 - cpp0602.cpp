#include<iostream>
#include <iomanip>
#define a() a
using namespace std;

class SinhVien{
private:
    string ten,lop,ngaysinh;
    double gpa;
public:
    SinhVien (){
        
    }
    friend istream &operator>>( istream &in,SinhVien &a)
    {
        getline(in,a.ten);
        getline(in,a.lop);
        getline(in,a.ngaysinh);
        string res = a.ngaysinh ;
            if( res[1] == '/' ) res = '0' + res ;
            if( res[4] =='/' ) res.insert(3,"0");
            a.ngaysinh = res ;
        in>>a.gpa;
        return in;
    }
    friend ostream &operator<<( ostream &out,SinhVien &a )
    {
        out <<"B20DCCN001 "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<setprecision(2)<<fixed<<a.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}