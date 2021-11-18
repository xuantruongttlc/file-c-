#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
main(){
	int i;
	string s;
	cin >> s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int n=s.size();
	for(i = 0; i<n; i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') s[i]='0';
	}
	for(i = 0 ; i < n; i++){
		if(s[i] != '0') cout << "." << s[i];
	}
}
