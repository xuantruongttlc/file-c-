#include<bits/stdc++.h>
using namespace std;
struct Person{
	string ten, ns;
	int d, m, y, tt;
};
int doi(string s, int a, int b){
	int x=0;
	for(int i=a; i<=b; i++) x=x*10+(s[i]-'0');
	return x;
}
main(){
	struct Person p[100];
	int n, i, j;
	cin >> n;
	for(i=0; i<n; i++){
		fflush(stdin);
		cin >> p[i].ten >> p[i].ns;
		p[i].d=doi(p[i].ns, 0, 1);
		p[i].m=doi(p[i].ns, 3, 4);
		p[i].y=doi(p[i].ns, 6, 9);
		p[i].tt=i;
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(p[i].y>p[j].y) swap(p[i], p[j]);
			else if(p[i].y==p[j].y)
					if(p[i].m>p[j].m) swap(p[i], p[j]);
					else if(p[i].m==p[j].m)
							if(p[i].d>p[j].d) swap(p[i], p[j]);
		}
	}
	cout << p[n-1].ten << endl << p[0].ten ;
}
