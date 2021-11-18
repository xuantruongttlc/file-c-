#include <iostream>
#include<set>
#include <climits>
using namespace std;
const int n = 256;
int findSubString(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 < len2) {
        return  -1;
    }
    int hash_s2[n] = { 0 };
    int hash_s1[n] = { 0 };
    for (int i = 0; i < len2; i++)
        hash_s2[s2[i]]++;
    
    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0;
    for (int j = 0; j < len1; j++) {
        hash_s1[s1[j]]++;
        if (hash_s1[s1[j]] <= hash_s2[s1[j]])
            count++;

        if (count == len2) {
            while (hash_s1[s1[start]] > hash_s2[s1[start]] ){
                    hash_s1[s1[start]]--;
                    start++;
            }
            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    if (start_index == -1) {
        return  -1;
    }
    string tmp=s1.substr(start_index, min_len);
    return tmp.size();
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        set<char> v;
        string s2="";
        for(int i=0 ; i<s1.length() ; i++){
            v.insert(s1[i]);
        }
        for(char i:v){
            s2+=i;
        }
        cout<<findSubString(s1, s2)<<endl;
    }
}

