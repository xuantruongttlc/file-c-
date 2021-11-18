#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct Point{
	double x, y;
};
int kt( double d1, double d2, double d3){
	if(d1 + d2 <= d3 || d1 + d3 <= d2 || d2 + d3 <= d1) return 0;
	return 1;
}
double d(struct Point p, struct Point q){
	double dx = p.x - q.x, dy = p.y - q.y;
	return sqrt(dx*dx + dy*dy);
}
main(){
	struct Point A,B,C;
	int t;
	cin >> t;
	while(t--){
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double d1 = d(A,B), d2 = d(A,C), d3 = d(B,C);
		if(!kt(d1,d2,d3)) cout << "INVALID\n";
		else{
			double x=(d1+d2+d3)*(d1+d2-d3)*(d1-d2+d3)*(-d1+d2+d3);
			double S=0.25*(double)sqrt(x);
			double R=0.25*d1*d2*d3/S;
			cout << fixed << setprecision(3) << PI*R*R << endl;
		}
	}
}
