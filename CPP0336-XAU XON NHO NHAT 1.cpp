#include<iostream>
#include<algorithm>
using namespace std;
string a,b;
int ktra(int i,int j){
    string t;
    for(int l=i;l<=j;l++)
        t.push_back(a[l]);
    sort(t.begin(),t.end());
    int l=0,k=0;
    int d=0;
    while(l<t.size() && k<b.size()){
        if(t[l]==b[k]){
            l++;
            k++;
            d++;
        }
        else if(t[l]<b[k])
            l++;
        else k++;
    }
    if(d==b.size())
        return 1;
    return 0;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        cin>>a>>b;
        sort(b.begin(),b.end());
        int l=0,r=1000;
        int kt=0;
        for(int i=0;i<a.size();i++){
            for(int j=i;j<a.size();j++){
                if(ktra(i,j)){
                    if(j-i<r-l){
                        l=i;
                        r=j;
                        kt=1;
                    }
                    break;
                }
            }
        }
        if(kt==1){
            for(int i=l;i<=r;i++)
                cout<<a[i];
        }
        else cout<<-1;
        cout<<endl;
    }
}
