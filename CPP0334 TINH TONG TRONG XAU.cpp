#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int len=s.size();
		int a[1001],k=0;
		stack<char>stk;
		for(int i=len-1; i>= 0; i--){
			if(s[i] >= 48 && s[i] <= 57){
				stk.push(s[i]);
			}
			if(!stk.empty() && (s[i] < 48 || s[i] > 57 || i == 0)){
				int sum=0,dem=1;
				sum = stk.top( ) -'0';
				stk.pop( );
				while(!stk.empty( )){
					int x=stk.top( );
					sum=sum*10+x-'0';
					stk.pop( );
				}
				a[k++] = sum;
			}
			if(s[i] < 48 || s[i] > 57) continue;
		}
		int sum = 0;
		for(int i=0; i < k; i++) sum += a[i];
		cout << sum << endl;
	}
}
