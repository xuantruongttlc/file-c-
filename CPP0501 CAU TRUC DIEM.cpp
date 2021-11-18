#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input(Point &A ){
	cin >> A.x>>A.y;
}
double distance( Point &A, Point &B){
	double n=( B.x - A.x);
	double m = (B.y - A.y);
	double d = sqrt(n*n+m*m);
	return d;
}


int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
