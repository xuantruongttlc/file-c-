#include<iostream>
#include<cmath>
using namespace std;
long long gcm(long long A, long long B) {
    if (B == 0)
        return A;
    return gcm(B, A%B);
}
class PhanSo
{
    private:
        long long tu_so,mau_so;
    public:
        PhanSo(){
            
        }
        PhanSo(long long tu_so,long long mau_so)
        {
            this->tu_so = tu_so;
            this->mau_so = mau_so;
        }
        void rutgon()
        {
            long long gcd = gcm(tu_so,mau_so);
            tu_so/=gcd;
            mau_so/=gcd;
        }
        friend istream &operator>>( istream &input,PhanSo &obj)
        {
            input >> obj.tu_so >> obj.mau_so;
            return input;
        }
        friend ostream &operator<<( ostream &output,PhanSo obj )
        {
            output << obj.tu_so << "/" << obj.mau_so;
            return output;
        }
        PhanSo operator+(PhanSo &ps)
        {
            PhanSo kq;
            kq.tu_so = this->tu_so * ps.mau_so + ps.tu_so * this->mau_so;
            kq.mau_so = this->mau_so * ps.mau_so;
            kq.rutgon();
            return kq;
        }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout<<p+q;
    return 0;
}
