#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
public:
    string mkh, tenKH, sex, bd, add;
    friend class HoaDon;
    friend istream &operator >> (istream &is, KhachHang &a)
    {
        ++cntkh;
        if(cntkh < 10) a.mkh = "KH00" + to_string(cntkh);
        else if(cntkh<100) a.mkh = "KH0" + to_string(cntkh);
        else a.mkh = "KH" + to_string(cntkh);
        scanf("\n");
        getline(is, a.tenKH);
        getline(is,a.sex);
        getline(is,a.bd);
        getline(is, a.add);
        KH[a.mkh] = a;
        return is;
    }
};

class MatHang
{
public:
    string mmh, tenMH, dvt;
    long long giaMua, giaBan;
    friend class HoaDon;
    friend istream &operator >> (istream &is, MatHang &a)
    {
        ++cntmh;
        if(cntmh < 10) a.mmh = "MH00" + to_string(cntmh);
        else if (cntmh<100) a.mmh = "MH0" + to_string(cntmh);
        else a.mmh = "MH" + to_string(cntmh);
        scanf("\n");
        getline(is, a.tenMH);
        getline(is, a.dvt);
        cin >> a.giaMua >> a.giaBan;
        MH[a.mmh] = a;
        return is;
    }
};

class HoaDon
{
public:
    string mhd, mkh, mmh;
    long long sl;
    long long interest;
    friend bool cmp(HoaDon &a,HoaDon &b);
    friend istream &operator >> (istream &is, HoaDon &a)
    {
        ++cnthd;
        if(cnthd < 10) a.mhd = "HD00" + to_string(cnthd);
        else if ( cnthd <100) a.mhd = "HD0" + to_string(cnthd);
        else a.mhd = "HD" + to_string(cnthd);
        scanf("\n");
        is >> a.mkh >> a.mmh >> a.sl;
        a.interest=(MH[a.mmh].giaBan-MH[a.mmh].giaMua)*a.sl;
        return is;
    }
    friend ostream &operator << (ostream &os, HoaDon &a)
    {
        os << a.mhd << ' ' << KH[a.mkh].tenKH << ' ' << KH[a.mkh].add << ' ' << MH[a.mmh].tenMH << ' ' << a.sl << ' '<<MH[a.mmh].giaBan * a.sl << ' '<< a.interest<<endl;
        return os;
    }
};
bool cmp(HoaDon &a,HoaDon &b){
    return a.interest>=b.interest;
}

void sapxep(HoaDon *dshd,int K){
    sort(dshd, dshd+K, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
