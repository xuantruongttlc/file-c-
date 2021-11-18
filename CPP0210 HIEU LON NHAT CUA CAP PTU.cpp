#include<iostream>
using namespace std;

main( ){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		int a[n+1];
		for(int i=0; i < n; i++) cin >> a[i];
		int diff = a[1] - a[0];
		int curr_sum = diff;
		int max_sum = curr_sum;
		for(int i=1; i <n-1; i++){
			diff=a[i+1] - a[i];
			if(curr_sum>0) curr_sum+=diff;
			else curr_sum = diff;
			if(curr_sum > max_sum) max_sum = curr_sum;
		}
		cout << max_sum << endl;
	}
}
