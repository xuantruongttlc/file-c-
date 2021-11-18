#include<iostream>
#include<vector>
using namespace std;
vector<bool> a(1000001,true);
void sang( ){
    a[0]=a[1]=false;
    for(long long i=2;i<=1000001;i++)
        if(a[i]==true)
            for(long long j=i*i;j<1000001;j+=i)
                a[j]=false;
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        sang( );
        long long n;
        cin>>n;
        bool test=false;
        if(n<4) cout<<"-1";
        else{
            for(long long i=2;i<=n;i++){
                if(a[i] == true && a[n-i] == true){
                    cout<<i<<" "<<n-i;
                    test=true;
                    break;
                }
            }
            if(!test) cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}
