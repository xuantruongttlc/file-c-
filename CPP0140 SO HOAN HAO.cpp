#include <iostream>
#include<cmath>
using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    bool flag = false;
    ll n;
    cin >> n;
    for (int i = 2; i < 20; i++)
    {
        if (isPrime(i) && isPrime(pow(2, i) - 1))
        {
            if (pow(2, 2 * i) - pow(2, i) == 2 * n)
            {
                cout << 1;
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        cout << 0;
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
