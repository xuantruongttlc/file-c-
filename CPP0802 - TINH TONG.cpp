#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tring_so(string s){
    for(int i=0; i<s.length() ; i++){
        if(s[i]>='a' && s[i]<='z') return 0;
        if(s[i]>='A' && s[i]<='Z') return 0;
    }
    int tmp=0;
    for(int i=0; i<s.length() ; i++){
        tmp*=10;
        tmp+= (int)(s[i]-'0');
        
    }
    return tmp;
}

int main(){
    string s;
    ifstream fp;
    fp.open("DATA.in");
    ll sum=0;
    while(fp>>s) {
        if (s.length() >= 10 ) continue;
        else {
            sum+=tring_so(s);
        }
    }
    fp.close();
    cout<<sum;
  
}