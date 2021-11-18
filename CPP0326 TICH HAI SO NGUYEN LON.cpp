#include<iostream>
#include<cstring>
using namespace std;
void solve(){
    string str="",s1,s2;
    cin>>s1>>s2;

    int *res;
    res=new int[s1.size()+s2.size()];
    for(int i=0; i<s1.size()+s2.size() ; i++) res[i]=0;
    
    for(int i=s1.size()-1; i>=0 ; i--){
        for(int j=s2.size()-1 ; j>=0 ; j--){
            res[i+1+j]+=(s1[i]-'0')*(s2[j]-'0');
        }
    }
    for(int i=s1.size() + s2.size()-1 ; i>=0 ; i--){
        if(res[i]>9){
            res[i-1]+=res[i]/10;
            res[i]%=10;
        }
    }
    int key=0;
    while(res[key]==0){
        key++;
    }
    for(int i=key; i<s1.size()+s2.size() ; i++){
        
        str+=(res[i]+'0');
    }
    cout<<str<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

