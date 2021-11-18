#include<bits/stdc++.h>
#include<fstream>
using namespace std;

main(){
	ifstream fp1;
    ofstream fp2;
    fp1.open("PTIT.in");
    fp2.open("PTIT.out");
    while(!fp1.eof()){
        char s;
        fp1.get(s);
        fp2<<s;
    }
    fp1.close();
    fp2.close();
}