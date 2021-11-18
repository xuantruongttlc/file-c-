#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
typedef long long ll;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; ++i )
#define sz(x) strlen(x)

char a[1000005][15] ;
void merge(int l,int m,int r)
{
    int n1 = m - l + 1, n2 = r - m ;
    char L[n1][15] , R[n2][15] ;
    for(int i = 0 ; i < n1 ; i++ )
    {
        strcpy(L[i],a[l+i]);
    }
    for(int i = 0 ; i < n2 ; i++ )
    {
        strcpy(R[i],a[m+i+1]);
    }
    int i = 0 , j = 0 , pos = l ;
    while( i < n1 && j < n2 )
    {
        if( strcmp(L[i],R[j]) == 1 )
        {
            strcpy(a[pos],L[i]);
            i++;
            pos++;
        }
        else
        {
            strcpy(a[pos],R[j]);
            j++;
            pos++;
        }
    }
    while( i < n1 )
    {
        strcpy(a[pos],L[i]);
        i++;
        pos++;
    }
    while( j < n2 )
    {
        strcpy(a[pos],R[j]);
        pos++;
        j++;
    }
}
void MergeSort(int l,int r)
{
    if( l < r )
    {
        int m = (l+r)/2;
        MergeSort(l,m);
        MergeSort(m+1,r);
        merge(l,m,r);
    }
}
bool check(char a[],char b[])
{
    char *ok = strstr(a,b);
    if( ok == NULL ) return false;
    return true;
}
struct Point{
    char data[15];
    int ts ;
};
int pos = 0 ;
typedef struct Point Point;
Point p[1000000];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n ; i++) cin>>a[i];
    MergeSort(0,n-1);
    char res[15] = "";
    FOR(0,n)
    {
        if( strcmp(res,a[i]) != 0 )
        {
            strcpy(res,a[i]);
            pos++;
            strcpy(p[pos].data,res);
            p[pos].ts = 1;
        }
        else
        {
            while( strcmp(res,a[i]) == 0 )
            {
                p[pos].ts++;
                i++;
            }
            i--;
        }
    }
    ll dem = 0 ;
    for(int i = 1 ; i <= pos ; i++ )
    {
        ll t1 = p[i].ts ;
        dem += t1*(t1-1);
        for(int j = 1 ; j <= pos ; j++ )
        {
            ll t2 = p[j].ts ;
            if( i == j ) continue;
            if( check(p[i].data,p[j].data) )
            {
                dem += t1*t2;
            }
        }
    }
    cout<<dem<<endl;
}
