#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int maxHist(int row[],int n)
{
    
    stack<int> result;
 
    int top_val;
 
    int max_area = 0;
 
    int area = 0;
    int i = 0;
    while (i < n) {
      
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);
 
        else {
            
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;
 
            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }
    while (!result.empty()) {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);
 
        max_area = max(area, max_area);
    }
    return max_area;
}
void solve(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m ; i++){
        for(int j=0; j<n ; j++){
            cin>>a[i][j];
        }
    }
    int result = maxHist(a[0],n);
    for(int i=1; i<m ; i++){
        for(int j=0; j<n ; j++){
            if(a[i][j])
                a[i][j]+=a[i-1][j];
        }
        result = max(result, maxHist(a[i],n));
    }

    cout<<result<<endl;
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

