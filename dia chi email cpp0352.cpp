#include<iostream>
#include<cstring>
using namespace std;
char email[10000][50]; int t;
void xuly(char s[], int dem){
    char ds[10000][50]; char add[50]="";
    int n=0,i,j;
    char *p=strtok(s," ");
    while(p!=NULL){
        for(i=0; i<strlen(p); i++) p[i]=tolower(p[i]);
        strcpy(ds[n], p);
        n++;
        p=strtok(NULL, " ");
    }
    strcat(add, ds[n-1]);
    for(i=0; i<n-1; i++) strncat(add, ds[i],1);
    strcpy(email[dem], add);
}
void inkq(){
    int i, d, j;
    for(i=0; i<t; i++){
        cout << email[i];
        d=0;
        for(j=i;j>=0;j--)
            if(strcmp(email[i], email[j])==0) d++;
        if(d>1) cout << d;
        cout << "@ptit.edu.vn\n";
    }
}
main(){
    cin >> t;
    for(int i=0; i<t; i++){
    	scanf("\n");
    	char s[50];
        cin.getline(s, 50);
        xuly(s,i);
    }
    inkq();
}