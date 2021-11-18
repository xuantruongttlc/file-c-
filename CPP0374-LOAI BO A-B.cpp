#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int A = 0, B = 0;
    for(int i=0; i<s.length() ; i++)
    {
        if(s[i] == 'A')
        {
            if(A <  B) B = A + 1;
            else ++B;
        }
        else
        {
            if(A < B) ++A;
            else A = B + 1;
        }
    }
    cout << A;
    return 0;
}
