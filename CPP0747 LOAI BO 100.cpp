#include<iostream>
#include<vector>
#include<set>
using namespace std;
string tmp="100";
void loai(string &s){
    size_t pos;
    int dem=0;
    do{
        pos=s.find(tmp);
        if(pos==-1) break;
        s.erase(pos,3);
        dem+=3;
    }
    while(true);
    cout<<s<<endl;
}
void solve(){
    fflush(stdin);
    string s;
    cin>>s;
    loai(s);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
