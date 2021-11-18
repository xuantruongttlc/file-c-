#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char msv[15], ten[50], lop[15];
	float p1, p2, p3;
};
void nhap(struct SinhVien &x){
	getchar();
	cin.getline(x.msv, 20);
	cin.getline(x.ten, 50);
	cin.getline(x.lop, 15);
	cin >> x.p1 >> x.p2 >> x.p3;
}
void inds(struct SinhVien ds[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(ds[i].ten, ds[j].ten)>0) swap(ds[i], ds[j]);
		}
	}
	for(i=0; i<n; i++){
		cout << i+1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
		cout << fixed << setprecision(1) << ds[i].p1 << " " << ds[i].p2 << " " << ds[i].p3 << endl;
	}
}
int main(){
	struct SinhVien ds[150];
	int n,i;
	cin >> n;
	for(i = 0; i < n; i++) nhap(ds[i]);
	inds(ds, n);
	return 0;
}
