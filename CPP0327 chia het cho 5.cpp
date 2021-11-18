#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long  s1= 0;
		int k=0;
		int d = 0;
		for(int i = s.size(); i >=0; i--){
			if(s[i] == '1'){
				int k=s.size()-i-1;
				if(k%4==0) s1+= 1;
				if(k%4 == 1) s1+=2;
				if(k%4 == 2) s1+=4;
				if(k%4==3) s1+= 3;
			}
		}
		if(s1%5==0 && s1 != 0) cout << "Yes\n";
		else cout << "No\n";
	}
}
