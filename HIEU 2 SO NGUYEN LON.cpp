#include<iostream>
#include<string>
using namespace std;
void tinh(int m, int n, int c[], int e[]){
	int i, t=n-1, j, A[1010], d[1010]={0};
	for( i=m-1; i>=m-n; i--){
		d[i]=e[t];
		t--;
	}
	for( i=m-1; i>=0; i--){
		if(c[i]<d[i]){
			A[i]=c[i]+10-d[i]; 
			c[i-1]--;
		}
		else A[i]=c[i]-d[i];
	}
	for(i=0; i<m; i++)	cout << A[i];
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
		if(x==y){
			for(i=0; i<x; i++){
				if(a[i]==b[i]) continue;
				else{
					if(a[i]>b[i]){ tinh(x, y, a, b); break; }
					else { tinh(y, x, b, a); break; }
				}
			}
		}
		else{
			if(x>y) tinh(x, y, a, b);
			else tinh(y, x, b, a);
		}
		cout << endl;
	}
}
