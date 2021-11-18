#include<iostream>
using namespace std;

struct SinhVien
{
    string ten,lop,ngaysinh;
    double GPA;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin,a.ten);
    cin>>a.lop;
    cin>>a.ngaysinh;
    cin >> a.GPA ;
    string res = a.ngaysinh ;
    if( res[1] < '0' || res[1] > '9' ) res = '0' + res ;
    if( res[4] < '0' || res[4] > '9' ) res.insert(3,"0");
    while( res.size() != 10 ) res.insert(5,"0");
    a.ngaysinh = res ;
}
void inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001" << ' ' << a.ten << ' ' << a.lop << ' ' << a.ngaysinh << ' ';
    printf("%.2lf",a.GPA);
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
