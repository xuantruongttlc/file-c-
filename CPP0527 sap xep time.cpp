#include<bits/stdc++.h>
using namespace std;
struct time{
	int  a,b,c;
};
void nhap(int n,struct time x[]){
	for(int i= 0; i < n; i++){
		cin >> x[i].a >> x[i].b >> x[i].c;
	}
}
void sapxep(int n, struct time x[]){
	int i,j;
	for(i=0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(x[i].a > x[j].a) swap(x[i],x[j]);
			else if(x[i].a == x[j].a ) 
					if(x[i].b > x[j].b) swap(x[i],x[j]);
					else if(x[i].b==x[j].b)
							if(x[i].c > x[j].c) swap(x[i],x[j]);
		}
	}
}
void in(int n, struct time x[]){
	for(int i=0; i < n ; i++)
	cout << x[i].a <<" " << x[i].b << " " << x[i].c<<endl;
}
main(){
	struct time x[5000];
	int n,i,j;
	cin  >> n;
	nhap(n,x);
	sapxep(n,x);
	in(n,x);
}
