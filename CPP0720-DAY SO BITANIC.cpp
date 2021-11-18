#include<iostream>
using namespace std;
void solve(  )
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n ; i++)
        cin>>a[i];
    
    int tang[100];
    for (int i = 0; i < n; i++){
        tang[i] = 1;
    }
    //mang luu do dai day tang dan
    for(int i = 1 ; i < n ; i++ )
     {
         for(int j = 0 ; j < i ; j++ )
         {
             if( a[j] < a[i] )
             {
                 if( tang[i] < tang[j] + 1 ) tang[i] = tang[j] + 1 ;
             }
         }
     }
    int giam[100];
    for (int i = 0; i < n; i++)
        giam[i] = 1;
    //mang luu do dai day giam dan
    for (int i = n-2; i >= 0; i--){
        for (int j = n-1; j > i; j--)
            if (a[i] > a[j] && giam[i] < giam[j] + 1)
                giam[i] = giam[j] + 1;
    }
    int max = tang[0] + giam[0] - 1;
    for (int i = 1; i < n; i++){
        if (tang[i] + giam[i] - 1 > max)
            max = giam[i] + tang[i] - 1;
    }
    cout<<max<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}


