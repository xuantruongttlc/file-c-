#include<iostream>
#include <iomanip>
using namespace std;
#define a() a
class SinhVien{
    private:
    string ten,lop,date;
    double diem;
    public:
    SinhVien (){
        
    }
    friend void nhap(SinhVien &a);
    friend void in(SinhVien a);
};
void nhap(SinhVien &a){
    getline(cin,a.ten);
    getline(cin,a.lop);
    getline(cin,a.date);
    string res = a.date ;
    if( res[1] == '/' ) res = '0' + res ;
    if( res[4] =='/' ) res.insert(3,"0");
    while( res.size() <10  ) res.insert(5,"0");
    a.date = res ;
    cin>>a.diem;
}
void in(SinhVien a){
    cout<<"B20DCCN001 Nguyen Van A "<<a.lop<<" "<<a.date<<" "<<setprecision(2)<<fixed<<a.diem;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
