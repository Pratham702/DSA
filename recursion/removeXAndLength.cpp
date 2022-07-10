#include<bits/stdc++.h>
using namespace std;

void removeX(char s[]){
   
   if (s[0]=='\0')
   {
   	return;
   }
   if (s[0]!='x')
   {
   	removeX(s+1);
   }
   else
   {
   	int i = 1;
    for (; s[i] !='\0'; ++i)
    {
    	s[i-1]=s[i];
    }
    s[i-1]=s[i];
    removeX(s);

   }



}
int length(char str[]){
    if (str[0]=='\0')
    {
    	return 0;
    }
    return 1+length(str+1);
}
int main(){
	char s[100];
	cin>>s;
	cout<<"length of string :"<<length(s)<<endl;
	removeX(s);
	cout<<s<<endl;
	cout<<"length of string :"<<length(s)<<endl;
}	