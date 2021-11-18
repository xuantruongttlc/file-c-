#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0, ans = 0, j = 1, a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        if(n) while(a[j] == a[j - 1]) ++j;
        ans = abs(a[j - 1] - a[j]);
        for(int i = j + 1; i < n; ++i) ans = gcd(ans,abs(a[i] - a[i - 1]));
        if(j == n) ans = 0;
        double sq = sqrt(ans);
        for(int i = 1; i <= sq; ++i)
        {
            if(ans % i == 0)
            {
                cnt++;
                if(ans / i != i) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
