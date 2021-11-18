#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
using namespace std;
int cnt=0;
class SinhVien
{
private:
    string ma,ten,lop,ngaysinh;
    double gpa;
public:
    SinhVien(){
        
    }
    friend bool cmp(SinhVien &a, SinhVien &b);
    friend istream &operator>>( istream &in,SinhVien &a)
       {
        cnt++;
        scanf("\n");
        if(cnt<10){
            a.ma="B20DCCN00"+to_string(cnt);
        }
        else{
            a.ma="B20DCCN0"+to_string(cnt);
        }
        string nm="";
            getline(in,nm);
            stringstream ss(nm);
            string token="";
            while(ss>>token){
            transform(token.begin(),token.end(),token.begin(),::tolower);
            token[0]=toupper(token[0]);
            a.ten+=token+" ";
        }
        in>>a.lop;
        in>>a.ngaysinh;
        string res = a.ngaysinh ;
            if( res[1] == '/' ) res = '0' + res ;
            if( res[4] == '/' ) res.insert(3,"0");
            a.ngaysinh = res ;
        in>>a.gpa;
        return in;
       }
    friend ostream &operator<<( ostream &out,SinhVien &a )
    {
            out <<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
        return out;
    }
};
bool cmp(SinhVien &a, SinhVien &b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
