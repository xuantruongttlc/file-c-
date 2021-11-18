#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
using namespace std;
class NhanVien{
private:
    string ma,ten,lop,mail;
public:
    NhanVien (){
        
    }
    friend bool ss(NhanVien &a, NhanVien &b);
    friend istream &operator>>( istream &in,NhanVien &a)
    {
   
        in>>a.ma;
        scanf("\n");
        getline(in,a.ten);
        in>>a.lop>>a.mail;
        return in;
    }
    friend ostream &operator<<( ostream &out,NhanVien &a )
    {
        out <<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
        return out;
    }
};
bool ss(NhanVien &a, NhanVien &b)
{
    if(a.lop > b.lop) return false;
    if(a.lop < b.lop) return true;
    if(a.ma > b.ma) return false;
    return true;
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, ss);
}
int main() {
    int N,i;
    cin >> N;
    NhanVien ds[N];
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
}
 	