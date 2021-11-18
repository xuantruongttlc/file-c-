#include <iostream>
#include <cstdint>
#include <vector>
#include <list>
#include <set>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <cmath>
#include<iomanip>
#include<fstream>
#define ll long long
using namespace std;

int main(){
    set<int> v1,v2;
    string s;
    ifstream fb;
    fb.open("DATA.in");
    int n,m;
    fb>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n ; i++) fb>>a[i];
    for(int i=0; i<m ; i++) fb>>b[i];
    fb.close();
    for(int i=0; i<n ; i++) {
        v1.insert(a[i]);
    }
    for(int i=0 ; i<m ; i++){
        if(v1.find(b[i])!=v1.end()) v2.insert(b[i]);
    }
    for(auto i:v2) cout<<i<<" ";
}

