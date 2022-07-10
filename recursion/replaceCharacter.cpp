#include<bits/stdc++.h>
using namespace std;
void replaceChar(char s[],char s1,char s2){

	if (s[0]=='\0')
	{
		return;
	}
	if (s[0]!=s1)
	{
		
		 replaceChar(s+1,s1,s2);
	}
	else{
		s[0]=s2;
		replaceChar(s+1,s1,s2);
	}
}
int main(){
	char s[100];
	char s1,s2;
	cin>>s;
	cin>>s1>>s2;
    replaceChar(s,s1,s2);
	cout<<s<<endl;
}	