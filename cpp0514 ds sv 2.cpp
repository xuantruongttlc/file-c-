#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char hoten[30], lop[15];
	string date;
	float diem;
};

void nhap(struct SinhVien ds[], int n){
	for(int i=0; i < n ; i++){
		getchar();
		cin.getline(ds[i].hoten,30);
		cin.getline(ds[i].lop,15);
		scanf("\n");
		getline(cin,ds[i].date);
		scanf("\n");
		cin >> ds[i].diem;
	}
}
void in( struct SinhVien ds[], int n){
	for( int i=0; i < n; i++){
		if(i < 9) cout << "B20DCCN00" << i+1 << " ";
		else cout << "B20DCCN0" << i+1 <<" ";
		char *p = strtok(ds[i].hoten," ");
		while(p!= NULL) {
			p[0]=toupper(p[0]);
			for(int j = 1; j < strlen(ds[i].hoten); j++) p[j] = tolower(p[j]);
			cout << p <<" ";	
			p = strtok(NULL," 	");
		}
		cout << ds[i].lop <<" "; 
		string s = ds[i].date;
		int n = s.length();
		if(n < 10) {
			if(n==9){
				if(s[1] == '/') cout << 0 << s;
				else {
					cout << s[0] << s[1] << s[2] <<0;
					for(int i = 3; i < n; i++) cout << s[i];
				}
			}
			else {
				cout << 0 << s[0] << s[1] << 0;
				for(int i = 2; i < n; i++) cout << s[i];
				cout << " ";
			}
		
		}
		else 
			cout << s <<" ";
		cout <<" " <<  fixed << setprecision(2)  << ds[i].diem << endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
