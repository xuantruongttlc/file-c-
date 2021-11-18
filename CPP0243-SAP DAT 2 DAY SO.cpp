#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    while(t--)
    {
        cin >> n >> m;
        int a[n], b[m];
        vector<int> v;
        map<int, int> myMap;
        for(int i=0; i<n ; i++)
        {
            cin >> a[i];
            ++myMap[a[i]];
        }
        for(int i=0; i<m ; i++) cin >> b[i];
        sort(a, a + n);
        for(int i=0; i<m ; i++)
        {
            int tmp = myMap[b[i]];
            for(int j=0; j<tmp ; j++)
            {
                v.push_back(b[i]);
                --myMap[b[i]];
            }
        }
        for(int i=0; i<n ; i++) if(myMap[a[i]])   v.push_back(a[i]);
        for(int i=0; i<v.size() ; i++) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}
