#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int cnt=1;
class GiaoVien
{
private:
    string ma,ten,nganh,ht;
public:
    GiaoVien(){
        
    }
    string getnganh(){
        return nganh;
    }
    friend bool cmp(GiaoVien &a,GiaoVien &b);
    friend istream &operator>>(istream &in , GiaoVien &a){
        scanf("\n");
        if(cnt<10){
            a.ma="GV0"+to_string(cnt);
        }
        else{
            a.ma="GV"+to_string(cnt);
        }
        cnt++;
        getline(in,a.ten);
        string nm="";
        getline(in,nm);
        stringstream ss(nm);
        string token="";
        while(ss>>token){
            a.nganh+=toupper(token[0]);
        }
        return in;
    }
    friend ostream &operator<<(ostream &out, GiaoVien &a){
        out<<a.ma<<" "<<a.ten<<" "<<a.nganh<<endl;
        return out;
    }
};

int main(){
    int n;
    cin>>n;
    cin.ignore();
    GiaoVien ds[n];
    for(int i=0; i<n ; i++) cin>>ds[i];
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        string nm="";
        getline(cin,nm);
        stringstream ss(nm);
        string token="";
        while(ss>>token){
            s+=toupper(token[0]);
        }
        cout<<"DANH SACH GIANG VIEN BO MON "<<s<<":"<<endl;
        for(int i=0; i<n ; i++){
            if(s==ds[i].getnganh()){
                cout<<ds[i];
            }
        }
    }
}

 	