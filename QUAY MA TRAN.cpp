#include<iostream>
using namespace std;
void quay(int n, int m){
	int N=n, M=m, i, j;
    int a[n+1][m+1];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> a[i][j];
    int h=0, c=0;
    int x;
    while(h<n && c<m){
        if(h+1==n || c+1==m)
            break;
        x=a[h+1][c];
        for(i=c; i<m; i++)
			swap(a[h][i], x);
        h++;
        for(i=h; i<n; i++)
			swap(a[i][m-1], x);
        m--;
        if(h<n)
        	for(i=m-1; i>=c; i--)
				swap(a[n-1][i], x);
    	n--;
    	if(c<m)
        	for(i=n-1; i>=h; i--)
				swap(a[i][c], x);
    	c++;
	}
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cout<< a[i][j] << " ";
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        quay(n, m);
        cout << endl;
    }
}
