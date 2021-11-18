#include<iostream>
using namespace std;

struct NhanVien{
	string ten,gt,age,diachi,ma,hd;
};
void nhap(NhanVien &a){
	scanf("\n");
	getline(cin,a.ten);
	scanf("\n");
	getline(cin,a.gt);
	scanf("\n");
	getline(cin,a.age);
	scanf("\n");
	getline(cin,a.diachi);
	scanf("\n");
	getline(cin,a.ma);
	scanf("\n");
	getline(cin,a.hd);
}
void inds(NhanVien ds[], int N){
	for(int i=0; i < N; i++){
		if(i < 9) cout << "0000";
		else cout << "000";
		cout << i+1 << " " << ds[i].ten <<" "<< ds[i].gt << " " ;
		cout << ds[i].age <<" "<< ds[i].diachi <<" ";
		cout  << ds[i].ma <<" " << ds[i].hd<<endl;
	}	
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
