#include<bits/stdc++.h>
using namespace std;

struct dl{
	int x,y;
};

bool cmp(dl a, dl b){
	if(a.y > b.y) return true;
	if(a.y == b.y && a.x < b.x) return true;
	return false ;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int b[100101]={0};
		dl a[n];
		for(int i=0; i < n; i++){
			cin >> a[i].x;
			b[a[i].x]++;
		}
		for(int i=0; i < n; i++) a[i].y = b[a[i].x];
		sort(a,a+n, cmp);
		for(int i=0; i < n; i++) cout << a[i].x <<" ";
		cout << endl;
	}
}

