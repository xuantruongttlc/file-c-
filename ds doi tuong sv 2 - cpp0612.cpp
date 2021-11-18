#include<iostream>
#include <iomanip>
#include<sstream>
#include <algorithm>
using namespace std;
int cnt=0;
class SinhVien
{
private:
    string ten,lop,ngaysinh;
    double gpa;
public:
    SinhVien(){
        
    }
    friend istream &operator>>( istream &in,SinhVien &a)
       {
        scanf("\n");
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
        cnt++;
        if(cnt<10){
            out <<"B20DCCN00"<<cnt<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
        }
        else {
            out <<"B20DCCN0"<<cnt<<" "<<a.ten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<setprecision(2)<<fixed<<a.gpa<<endl;
        }
        return out;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
