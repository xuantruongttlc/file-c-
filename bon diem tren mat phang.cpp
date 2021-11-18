#include<iostream>
using namespace std;
main(){
	int n;
	cin >> n;
	while(n--){
		int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
		cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3>>x4>>y4>>z4;
		int a1=x2-x1, b1=y2-y1, c1=z2-z1, a2=x3-x1, b2=y3-y1, c2=z3-z1;
		int m=b1*c2-b2*c1, n=a2*c1-a1*c2, p=a1*b2-a2*b1;
		int x=m*(x4-x1)+n*(y4-y1)+p*(z4-z1);
		if(x==0) cout << "YES\n";
		else cout << "NO\n";
	}
}
