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
    string getten(){
        return ten;
    }
    friend bool cmp(GiaoVien &a,GiaoVien &b);
    friend istream &operator>>(istream &in , GiaoVien &a){
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
        string x;
        cin>>x;
        string z=x;
        transform(x.begin(),x.end(),x.begin(),::tolower);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<z<<":"<<endl;
        for(int i=0;i<n;i++){
            string w=ds[i].getten();
            transform(w.begin(),w.end() , w.begin(), ::tolower);
            if(w.find(x)!=string::npos){
                cout<<ds[i];
            }
        }
    }
}

