#include<iostream>
#include <iomanip>
using namespace std;
main(){
	int  n;
	cin >> n;
	double s = 0;
	for(int i = 1; i <= n; i++){
		s += (double)1/i;
	}
	cout << setprecision(4) << fixed << s;
}
