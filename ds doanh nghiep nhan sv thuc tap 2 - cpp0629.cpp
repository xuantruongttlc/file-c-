#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int cnt=1;
class Doanh
{
private:
    string ma,ten;
    int member;
public:
    Doanh(){
        
    }
    int getmember(){
        return member;
    }
    friend bool cmp(Doanh &a, Doanh &b);
    friend istream &operator>>(istream &in , Doanh &a){
        scanf("\n");
        getline(in,a.ma);
        getline(in,a.ten);
        in>>a.member;
        return in;
    }
    friend ostream &operator<<(ostream &out, Doanh &a){
        out<<a.ma<<" "<<a.ten<<" "<<a.member<<endl;
        return out;
    }
};
bool cmp(Doanh &a, Doanh &b){
    if(a.member > b.member) return true;
    if(a.member < b.member) return false;
    if(a.ma > b.ma) return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    Doanh ds[n];
    for(int i=0; i<n ; i++) cin>>ds[i];
    sort(ds, ds+n, cmp);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:"<<endl;
        for(int i=0; i<n ; i++) {
            if(ds[i].getmember()>= a && ds[i].getmember() <=b)
                cout<<ds[i];
        }
    }
    
}

