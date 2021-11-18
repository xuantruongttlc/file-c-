#include<iostream>
using namespace std;
long long tinh(long long n, int x, int y){
	int i = 0, j,c[20], d[20], b[20];
	long long s =0;
	while(n > 0){
		c[i] = n%10;
		b[i] = c[i];
		n /= 10;
		i++;
	}
	for(j = 0; j < i; j++) c[j] = b[i-j-1];
	for(j=0; j<i; j++)	c[j]=b[i-j-1];
	for(j=0; j<i; j++)	if(c[j]==x) c[j]=y;
	for(j=0; j<i; j++)	s=s*10+(long long)c[j];
	return s;
}
main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		int x=6, y=5;
		cin >> a >> b;
		cout << tinh(a,x,y)+tinh(b,x,y) << " " << tinh(a,y,x)+tinh(b,y,x) << endl;
	}
}
