#include <iostream>
#include <string>
using namespace std;
main(){
	int a;
	cin >> a;
	while(a--){
		long long n;
		int i, t=0, s[20], b[20];
		cin >> n;
		while(n>0){
			s[t]=n%10;
			n/=10;
			t++;
		}
		for(i=0; i<t; i++) b[i]=s[t-1-i];
		for(i=0; i<t; i++){
			if (b[i]==0 && b[i+1]==8 && b[i+2]==4){
				for (int j=i+3; j<t; j++) cout << b[j];
				break;
			}
			else cout << b[i];
		}
		cout << "\n";
	}
}
