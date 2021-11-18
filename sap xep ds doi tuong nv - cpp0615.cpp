#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
using namespace std;
int cnt=0;
class NhanVien{
private:
    string dem,ten,gioitinh,ngaysinh,diachi,ma,ky;
    double gpa;
public:
    NhanVien (){
        
    }
    friend int ss(NhanVien &a,NhanVien &b);
    friend istream &operator>>( istream &in,NhanVien &a)
    {
        cnt++;
        scanf("\n");
        if(cnt<10){
                   a.dem="0000"+to_string(cnt);
               }
               else{
                   a.dem="000"+to_string(cnt);
               }
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
        out <<a.dem<<" "<<a.ten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.ma<<" "<<a.ky<<endl;
        return out;
    }
};
int ss(NhanVien &a,NhanVien &b){
    string s=a.ngaysinh;
    string x=b.ngaysinh;
    if((s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+s[9]-'0'>(x[6]-'0')*1000+(x[7]-'0')*100+(x[8]-'0')*10+x[9]-'0'){
        return 0;
    }
    else if((s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+s[9]-'0'<(x[6]-'0')*1000+(x[7]-'0')*100+(x[8]-'0')*10+x[9]-'0'){
        return 1;
    }
    else{
         if((s[1]-'0')+(s[0]-'0')*10>(x[1]-'0')+(x[0]-'0')*10){
                return 0;
            }
            if((s[1]-'0')+(s[0]-'0')*10<(x[1]-'0')+(x[0]-'0')*10){
                return 1;
            }
        else{
           if((s[4]-'0')+(s[3]-'0')*10>(x[4]-'0')+(x[3]-'0')*10){
            return 0;
        }
        else if((s[4]-'0')+(s[3]-'0')*10<(x[4]-'0')+(x[3]-'0')*10){
            return 1;
        }
            return 1;
        }
    }
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, ss);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
