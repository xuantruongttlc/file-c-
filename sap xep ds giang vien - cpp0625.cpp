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
        stringstream vv(a.ten);
        string tmp="";
        while(vv>>tmp){
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
                a.ht=tmp;
        }
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
bool cmp(GiaoVien &a,GiaoVien &b){
    if(a.ht<b.ht) return true;
    if(a.ht>b.ht) return false;
    if(a.ma>b.ma) return false;
    return true;
}
void sapxep(GiaoVien *ds,int n){
    sort(ds, ds+n, cmp);
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    GiaoVien ds[n];
    for(int i=0; i<n ; i++) cin>>ds[i];
    sapxep(ds,n);
    for(int i=0; i<n ; i++) cout<<ds[i];
}

