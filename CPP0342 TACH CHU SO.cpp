#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    fflush(stdin);
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        multiset<char> ss;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]>='0' && s[i]<='9') sum+=(int)(s[i]-'0');
            else
                ss.insert(s[i]);
        }
        for(char i:ss){
            cout<<i;
        }
        cout<<sum;
        cout<<endl;
    }
}
