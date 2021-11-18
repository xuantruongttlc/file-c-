#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string s;
	string age;
	double x1,x2,x3, sum;
};
void nhap(ThiSinh &A){
	getline(cin,A.s);
	getline(cin,A.age);
	cin >> A.x1>>A.x2>>A.x3;
	cin.ignore();
}

void in(ThiSinh &A){
	cout << A.s <<" ";
	cout << A.age<<" ";
	A.sum = A.x1+A.x2+A.x3;
	cout << fixed << setprecision(1) << A.sum << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

