#include<iostream>
#include<algorithm>
using namespace std;
int m,s,rmin[105], rmax[105];
#define for1(i,a,b) for(int i=a; i <= b; i++)
#define for2(i,a,b) for(int i=a; i >= b; i--)

int kt(){
	int x = s, n=0;
	while(x > 9){
		n++;
		rmax[n] = 9;
		x-=9;
		if(n > m) return 0;
	}
	if(n==m && x!=0) return 0;
	if(m-n == 1){
		n++;
		rmax[n]=x;
	}
	else{
		n++;
		rmax[n] = x;
		while(n<m){
			n++;
			rmax[n]=0;
		}
	}
	x = s;
	n = 0;
	while(x > 9){
		n++;
		rmin[n]=9;
		x-=9;
		if(n >m) return 0;
	}
	if(n==m && x != 0) return 0;
	if(m-n==1){
		n++;
		rmin[n]=x;
		if(!x) swap(rmin[n],rmin[n-1]);
	}
		else{
			if(x == 0){
				for1(i,n,m-1) rmin[i] = 0;
				rmin[m]=9;
			}
			else {
				rmin[n+1] = x - 1;
				for1(i,n+2,m-1) rmin[i]=0;
				rmin[m]=1;
			}
		}
		return 1;
}

main(){
	cin >> m>>s;
	if(m != 1 && s == 0){
		cout << "-1 -1";
		return 0;
	}
	if(!kt()) cout <<"-1 -1";
	else {
		for2(i,m,1) cout << rmin[i];
		cout <<" ";
		for1(i,1,m) cout << rmax[i];
	}
	return 0;
}
