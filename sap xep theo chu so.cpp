#include<bits/stdc++.h>
using namespace std;
int cmp(string x, string y){
    string a=x.append(y);
    string b=y.append(x);
    return a.compare(b)>0 ? 1:0;
}
void in(vector<string> a){
    sort(a.begin( ), a.end( ), cmp);
    for(int i=0; i<a.size(); i++) cout << a[i];
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        string s;
        vector<string> a;
        for(i=0; i<n; i++){
            cin >> s;
            a.push_back(s);
        }
        in(a);
        cout << endl;
    }
}
