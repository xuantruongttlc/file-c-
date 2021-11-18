#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    vector<int> a;
    while(cin>>n){
        a.push_back(n);
    }
    for(int i=0; i<a.size() ; i++) {
        bool ok=true;
        for(int j=0; j<i ; j++){
            if(a[i]==a[j]) {
                ok=false;
                break;
            }
        }
        if(!ok) continue;
        else {
            int dem=0;
            for(int j=0 ; j<a.size() ; j++){
                if(a[i]==a[j]) dem++;
            }
            cout<<a[i]<<" "<<dem<<endl;
        }
    }
    
}
