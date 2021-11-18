#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	size_t pos;
	int len = s1.length();
	do{
		pos=s.find(s1);
		if(pos == -1) break;
		s.erase(pos,len);
	}
	while(true);
	for(int i = 0; i <s.size(); i++){
		cout << s[i];
	}
}

