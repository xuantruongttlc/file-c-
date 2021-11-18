#include<bits/stdc++.h>
using namespace std;
struct SV{
    string msv, ht, lop, mail, cty;
};
bool cmp(string a, string b){
    return (a.compare(b)<0)? true:false;
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    struct SV sv[n];
    for(int i=0;i<n;i++){
        cin >> sv[i].msv;
        cin.ignore();
        getline(cin, sv[i].ht);
        cin >> sv[i].lop;
        cin >> sv[i].mail;
        cin >> sv[i].cty;
    }
    int q;
    cin >> q;
    vector<string> dn;
    while(q--){
        string s;
        cin >> s;
        dn.push_back(s);
    }
    for(i=0; i<dn.size();i++){
        vector<string> x;
        for(j=0; j<n; j++){
            if(dn[i]==sv[j].cty){
                x.push_back(sv[j].ht);
            }
        }
        sort(x.begin(), x.end(), cmp);
        int d=0;
        while(d<x.size()){
            for(j=0; j<n; j++){
                if(sv[j].ht==x[d]){
                    cout << j+1 << " " << sv[j].msv << " " << sv[j].ht << " ";
					cout << sv[j].lop << " " << sv[j].mail << " " << sv[j].cty << endl;
                    d++;
                }
            }
        }
    }
}
