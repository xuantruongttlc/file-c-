#include<iostream>
#include<math.h>
using namespace std;

struct data{
    double x,y;
};

int main(){
    int t;
    cin>>t;
    while(t--){
        data a[10];
        cin>>a[1].x>>a[1].y>>a[2].x>>a[2].y;
        double distance = sqrt(abs(a[1].x-a[2].x)*abs(a[1].x-a[2].x) + abs(a[1].y-a[2].y)* abs(a[1].y-a[2].y));
        printf("%.4lf\n",distance);
    }
}
