#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
using namespace std;
int cnt=0;
class NhanVien{
private:
    string ten,gioitinh,ngaysinh,diachi,ma,ky;
    double gpa;
public:
    NhanVien (){
        
    }
    friend istream &operator>>( istream &in,NhanVien &a)
    {
        scanf("\n");
        getline(in,a.ten);
        in>>a.gioitinh;
        in>>a.ngaysinh;
        cin.ignore();
        getline(in,a.diachi);
        in>>a.ma;
        in>>a.ky;
        return in;
    }
    friend ostream &operator<<( ostream &out,NhanVien &a )
    {
        cnt++;
        if(cnt<10){
            out <<"0000"<<cnt<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.ma<<" "<<a.ky<<endl;
        }
        else {
            out <<"000"<<cnt<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.ma<<" "<<a.ky<<endl;
        }
        return out;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
