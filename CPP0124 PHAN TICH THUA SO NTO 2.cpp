#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
void kt(){
	long long  n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		int x = 0;int d = 0;
		while(n % i == 0){
			d=1;
			x++;
			n /= i;
		}
		if(d == 1) cout << i << " " << x << endl;
	}if(n > 1) cout << n <<" " << 1;
}
main(){
		kt();
}
