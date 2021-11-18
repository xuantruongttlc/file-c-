#include<iostream>
#include<string>
using namespace std;
void tinh(int m, int n, int C[], int e[]){
	int i, t=n-1, k=m-1, j, A[1010], d[1010]={0}, c[1010]={0};
	for( i=m; i>m-n; i--){
		d[i]=e[t];
		t--;
	}
	for( i=m; i>0; i--){
		c[i]=C[k];
		k--;
	}
	for( i=m; i>=0; i--){
		A[i]=c[i]+d[i]; 
		if(A[i]>=10){
			A[i]=A[i]%10;
			c[i-1]++;
		}
	}
	if(A[0]==0) j=1;
	else j=0;
	for(i=j; i<=m; i++)	cout << A[i];
}
main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		int i, j, a[1010], b[1010];
		string s1, s2;
		cin >> s1 >> s2;
		int x=s1.length(), y=s2.length();
		for( i=0; i<x; i++) a[i]=s1[i]-'0';
		for( i=0; i<y; i++) b[i]=s2[i]-'0';
		if(x>y) tinh(x, y, a, b);
		else tinh(y, x, b, a);
		cout << endl;
	}
}
