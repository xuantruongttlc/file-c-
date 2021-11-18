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
  ll b[10001]={0};
       ll s;
       ifstream fp;
       fp.open("DATA.in");
    while(fp>>s) b[s]++;
       fp.close();
       for(int i=0; i<10001 ; i++){
           if(b[i]!=0) {
               cout<<i<<" "<<b[i]<<endl;
           }
       }
    
}