#include<iostream>

using namespace std;

void doihang(int a[][100],int n, int b){
    for(int i=0 ; i< n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++){
            if(a[b][i]<=a[b][j]) swap(a[b][i], a[b][j]);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int a[100][100];
        for(int i=0 ; i<m ; i++) {
            for(int j=0; j < n ; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i< n ; i++) {
            for(int j=1; j< m ; j++){
                if(a[j][i]!=0) a[j][i]+=a[j-1][i];
            }
        }
        for(int i=0 ; i< m ; i++){
            doihang(a, n, i);
        }
        int curr, max = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                curr = (j + 1) * a[i][j];
                if (curr > max)
                max = curr;
            }
        }
        cout<<max<<endl;
    }
}
