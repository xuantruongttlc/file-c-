#include <iostream>
using namespace std;
int xuly(int a[], int n, int k) {
    int i, j, d = 0;
    for(i=0; i<n; i++)	if(a[i]<=k)	d++;
    int x=0;
    for(i=0; i<d; i++)	if(a[i]> k)	x++;
    int t=x;
    for (i=0, j=d; j<n; i++, j++) {
        if(a[i]>k)	x--;
        if(a[j]>k)	x++;
        t=min(t, x);
    }
    return t;
}
int main() {
    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	int a[n];
    	for(int i=0; i<n; i++) cin >> a[i];
    	cout << xuly(a, n, k) << endl;
	}
}
