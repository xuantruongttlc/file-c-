#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long a,b,c;
        sort(arr,arr+n);
        for(int i=0; i < n; i++)  arr[i] = (arr[i] * arr[i]);
        int check=0;
        for(int i=0; i<n; i++)
        {
            long long left = n-2 , right = n-1;
            a = arr[i];
            while(left > i)
            {
                b = arr[left];
                c = arr[right];
                long long tmp = c - b;
                if(tmp == a)
                {
                    check=1;
                    break;
                }
                else if (tmp > a)
                    right--;
                else
                    left--;
            }
        }
        if(check) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
