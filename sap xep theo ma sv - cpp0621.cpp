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
    if(a.ma > b.ma) return false;
    return true;
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, ss);
}
NhanVien ds[1005];
int main() {
  
    int ind=0;
    while(cin>>ds[ind]){
        ind++;
    }
    sort(ds, ds+ind, ss);
    for(int i=0;i<ind;i++) cout << ds[i];
}
 		