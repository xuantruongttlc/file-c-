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
    set<string> v1,v2,v3;
    string s;
    ifstream fp1,fp2;
    fp1.open("DATA1.in");
    fp2.open("DATA2.in");
    while(fp1>>s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v1.insert(s);
        v2.insert(s);
    }
    while(fp2>>s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v1.insert(s);
        if(v2.find(s) != v2.end() ) v3.insert(s);
    }
    fp1.close();
    fp2.close();
    for(auto i:v1) cout<<i<<" ";
    cout<<endl;
    for(auto i:v3) cout<<i<<" ";
  
}

