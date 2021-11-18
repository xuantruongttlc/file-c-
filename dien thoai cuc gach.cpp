#include<stdio.h>
#include<string.h>
#include<ctype.h>
int kt(char s[], int n){
	int d = 0 , c = n -1;
	while(d < c){
		if(s[d]!=s[c]) return 0;
		d++; 
		c--;
	}
	return 1;
}
main(){
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char s[105];
		gets(s);
		int n = strlen(s), i;
		for(i=0; i<n; i++){
			s[i] = tolower(s[i]);
			if(s[i]=='a'||s[i]=='b'||s[i]=='c'){
			 	s[i]='2'; 
			 	continue; 
			}
			if(s[i]=='d'||s[i]=='e'||s[i]=='f'){ 
				s[i]='3'; 
				continue; 
			}
			if(s[i]=='g'||s[i]=='h'||s[i]=='i'){ 
				s[i]='4'; 
				continue; 
			}
			if(s[i]=='j'||s[i]=='k'||s[i]=='l'){ 
				s[i]='5'; 
				continue;
			}
			if(s[i]=='m'||s[i]=='n'||s[i]=='o'){ 
				s[i]='6'; 
				continue; 
			}
			if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'){ 
				s[i]='7'; 
				continue; 
			}
			if(s[i]=='t'||s[i]=='u'||s[i]=='v'){ 
				s[i]='8'; 
				continue; 
			}
			if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'){ 
				s[i]='9'; 
				continue;
			}
		}
		if(kt(s, n)) printf("YES\n");
		else printf("NO\n");
	}
}
