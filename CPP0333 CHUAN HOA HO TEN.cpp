#include<bits/stdc++.h>
using namespace std;

int a(char c){
	if(c==' '|| c == '\t' || c == '\n') return 0;
	return 1;
}
string sua(string s){
	if(s[0] >= 97 && s[0] <= 122) s[0]-=32;
	for(int i=1;i<s.size(); i++){
		if(s[i] >= 65 && s[i] <= 90) s[i]+=32;
	}
	return s;
}
string xuly(string s){
	for(int i=0; i < s.size( ); i++){
		if(s[i] >= 97 && s[i] <= 122) s[i] -= 32;
	}
	return s;
}
main(){
	string s;
	getline(cin,s);
	vector<string> stk;
	for(int i=0; i<s.size( ); i++){
		string res="";
		while(a(s[i]) && i <s.size()){
			res+=s[i];
			i++;
		}
		stk.push_back(res);
	}
	for(int i=0; i < stk.size()-1; i++){
		if(stk[i]=="") continue;
		stk[i]=sua(stk[i]);
		if(i==stk.size()-2){
			cout << stk[i]+","<<" ";
			continue;
		}
		cout << stk[i] <<" ";
	}
	cout << xuly(stk[stk.size()-1]);
}
