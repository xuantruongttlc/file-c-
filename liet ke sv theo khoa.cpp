#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
#include<vector>
using namespace std;
class NhanVien{
public:
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

NhanVien ds[1005];
int main() {
    int n;
    cin >> n;
    NhanVien ds[n];
    for(int i=0;i<n;i++) cin >> ds[i];
    vector<string> v;
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
        string x=s.substr(s.size()-2,2);
      cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
      for(int i=0;i<n;i++){
        if(x==ds[i].lop.substr(1,2)){
          cout<<ds[i];
        }
      }
    }
}
