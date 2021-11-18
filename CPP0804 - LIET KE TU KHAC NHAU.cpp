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
    set<string> v;
    string s;
    ifstream fp;
    fp.open("VANBAN.in");
    while(fp>>s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.insert(s);
    }
    fp.close();
    for(auto i:v) cout<<i<<endl;
    
       
}