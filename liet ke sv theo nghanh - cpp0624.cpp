#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
#include<vector>
using namespace std;
class NhanVien{
private:
    string ma,ten,lop,mail;
public:
    NhanVien (){
        
    }
    string getma(){
        return ma;
    }
    string getlop(){
        return lop;
    }
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
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,t="",x="",z="";
        scanf("\n");
        getline(cin,s);
        stringstream ss(s);
        while(ss>>t){
            transform(t.begin(),t.end(),t.begin(),::toupper);
            if(x.size()<2){x+=t[0];}
            z+=" "+t;
        }
        cout<<"DANH SACH SINH VIEN NGANH "<<z<<":"<<endl;
        for(int i=0;i<n;i++){
            if(x==ds[i].getma().substr(5,2)){
                if((x=="CN"||x=="AT")&&ds[i].getlop()[0]!='E'){
                        cout<<ds[i];
                }
                else if(x!="CN"&&x!="AT"){
                        cout<<ds[i];
                }
            }
        }
    }
}
