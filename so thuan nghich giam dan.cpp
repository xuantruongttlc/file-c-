#include<bits/stdc++.h>
using namespace std;
struct tu{
	char nd[60];
	int sl;
};
struct tu ds[1000]; int n=0;
int tim(char s[]){
	for(int i=0; i<n; i++)
		if(strcmp(s, ds[i].nd)==0) return i;
	return -1;
}
int tn(char s[]){
	if(strlen(s)==1) return 0;
	int d=0, c=strlen(s)-1;
	while(d<c){
		if(s[d]!=s[c]) return 0;
		d++; c--;
	}
	return 1;
}
int ss(char s1[], char s2[]){
	int n=strlen(s1), m=strlen(s2), i;
	if(n>m) return 1;
	else if(n<m) return 2;
		else{
			for(i=0; i<n; i++){
				if(s1[i]>s2[i]) return 1;
				if(s1[i]<s2[i]) return 2;
			}
		}
}
void sapxep(){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(ss(ds[i].nd, ds[j].nd)==2){
				struct tu tmp=ds[i];
				ds[i]=ds[j];
				ds[j]=tmp;
			}
		}
	}
	for(i=0; i<n; i++) cout << ds[i].nd << ' ' << ds[i].sl << endl;
}
main(){
	char s[50];
	while(scanf("%s", &s)!=-1){
		if(tn(s)){
			int t=tim(s);
			if(t==-1){
				strcpy(ds[n].nd, s);
				ds[n].sl=1;
				n++;
			}
			else ds[t].sl++;
		}
	}
	sapxep();
}
