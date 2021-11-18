
#include<iostream>
using namespace std;
void nhap(int n, int m, int a[100][100]){
	for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
}
int main( ){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[100][100];
        nhap(n,m,a);
        int d=0;
        int count = 0;
        while(d<=m/2){
            for(int i=d;i<m-d;i++) {
                if(count>=n*m) break;
                cout<<a[d][i]<<" ";
                count++;
            }
            for(int i=d+1;i<n-d;i++) {
                if(count>=n*m) break;
                cout<<a[i][m-d-1]<<" ";
                count++;
            }
            for(int i=m-d-2;i>=d;i--) {
                if(count>=n*m) break;
                cout<<a[n-d-1][i]<<" ";
                count++;
            }
            for(int i=n-d-2;i>d;i--){
                if(count>=n*m) break;
                cout<<a[i][d]<<" ";
                count++;
            }
            d++;
        }
        cout<<endl;
    }
}


