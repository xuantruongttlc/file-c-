#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char ten[30], nhom[15];
	int tt;
	float mua,ban,ls;
};

void nhap(struct SinhVien ds[], int n){
	for(int i=0; i < n ; i++){
		getchar();
		ds[i].tt = i+1;
		cin.getline(ds[i].ten,30);
		cin.getline(ds[i].nhom,15);
		cin >> ds[i].mua >> ds[i].ban;
		ds[i].ls = ds[i].ban-ds[i].mua;
	}
}
void sapxep (struct SinhVien ds[], int n){
	for(int i=0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(ds[j].ls > ds[i].ls) swap(ds[i], ds[j]);
		}
	}
}
void in( struct SinhVien ds[], int n){
	for(int i=0; i < n; i++){
		cout << ds[i].tt <<" "<< ds[i].ten <<" "<< ds[i].nhom <<" ";
		cout << setprecision(2) << fixed << (ds[i].ban-ds[i].mua) << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
