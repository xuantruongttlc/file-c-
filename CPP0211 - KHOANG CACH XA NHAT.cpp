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
        for(int i=0; i<n ; i++) cin>>a[i];
        int max=-1e6;
        for(int i=0; i<n-1 ; i++){
            for(int j=n-1 ; j>=i ; j--){
                while(a[i]>a[j]){
                    j--;
                }
                if(a[i]<=a[j]){
                    int tmp=j-i;
                    if(max<tmp) max=tmp;
                    break;
                }
            }
        }
        cout<<max<<endl;
    }
}
