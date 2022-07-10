#include<bits/stdc++.h>
using namespace std;

void removeDup(char s[]){
	if (s[0]=='\0')
	{
		return;
	}
   if (s[0]!=s[1])
   {
   	removeDup(s+1);
   }else{
   	int i=2;
   	for (; s[i]!='\0'; ++i)
   	{
   		s[i-1]=s[i];
   	}

   	s[i-1]=s[i];
   	removeDup(s);
   }
}


int main(){
	
	char s[100];
	cin>>s;
	removeDup(s);
	cout<<s<<endl;
}		