#include <iostream>
#include<vector>
#include<cmath>
#include <iomanip>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        cout<<endl;
        vector<int>::iterator low;
        for(int i=0; i<n ; i++){
            low=upper_bound(v.begin(), v.end(), a[i]);
            if(low!=v.end() ){
                cout<<v[low-v.begin()]<<" ";
            }
            else cout<<"_"<<" ";
        }
    }
}
