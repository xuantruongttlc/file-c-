#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n>>m;
		int a[n+1],b[m+1],f[n+2], g[m+2],i,j;
		for(i=0; i <=n+1; i++) f[i]=0;
		for(i=0; i <=m+1; i++) g[i] = 0;
		 for(i=1; i <= n; i++){
		 	cin >> a[i];
		 	f[i]=a[i]+f[i-1];
		 }
		 for(i=1; i<= m; i++) cin >> b[i];
		 for(i =m; i >= 1; i--){
		 	g[i] = b[i] + g[i+1];
		 }
		 int s=0;
		 for(i=1; i <= n; i++){
		 	for(j=m; j>i; j--){
		 		s = max(s,f[i]+g[j]);
			 }
		 }
		 for(i=0; i <= n+1; i++) f[i] = 0;
		 for(i=0; i <= m+1; i++) g[i] = 0;
		 for(i=n; i >= 1; i--){
		 	f[i] = a[i] + f[i+1];
		 }
		 for(i=1; i <= m; i++) g[i] = b[i] + g[i-1];
		 for(i=1; i <= m; i++){
		 	for(j =n; j>i; j--){
		 		s = max(s, g[i] + f[j]);
			 }
		 }
		 s = max(s,max(g[m],f[1]));
		 cout << s << endl;
	}
}
