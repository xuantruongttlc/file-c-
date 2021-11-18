#include<bits/stdc++.h>
using namespace std;
int t=1;
struct NhanVien{
	string ten,gt,date,diachi,ma,ky;
	int tt, ns;
};
void nhap(struct NhanVien &ds){
	scanf("\n");
	getline(cin,ds.ten);
	getline(cin,ds.gt);
	getline(cin,ds.date);
	getline(cin,ds.diachi);
	getline(cin,ds.ma);
	getline(cin,ds.ky);
	ds.tt=t++;
	ds.ns=(ds.date[6]-'0')*10000000 + (ds.date[7]-'0')*1000000 + (ds.date[8]-'0')*100000 + (ds.date[9]-'0')*10000;
	ds.ns+=(ds.date[0]-'0')*1000+(ds.date[1]-'0')*100;
	ds.ns+=(ds.date[3]-'0')*10+(ds.date[4]-'0');
}
void sapxep(struct NhanVien ds[], int n){
	for(int i=0; i < n-1; i++){
		for(int j=i+1; j < n; j++){
			if(ds[i].ns > ds[j].ns) swap(ds[i], ds[j]);
		}
	}
}
void inds(struct NhanVien ds[], int n){
	int i;
	for(int i = 0; i < n; i++){
		if(ds[i].tt < 10) cout << "0000";
		else {
			cout << "000";
		}
		cout << ds[i].tt << " "<< ds[i].ten <<" " << ds[i].gt <<" " << ds[i].date <<" " << ds[i].diachi << " " << ds[i].ma <<" "<< ds[i].ky << endl;
	}
}
main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
