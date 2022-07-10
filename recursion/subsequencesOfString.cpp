#include<bits/stdc++.h>
using namespace std;

int subs(string s,string o[]){

if (s.size()==0)
{
	o[0]=" ";
	return 1;
}

string smallString = s.substr(1);
int smallOutputSize=subs(smallString,o);
 
 for (int i = 0; i < smallOutputSize; ++i)
 {
 	o[i+smallOutputSize]= s[0]+o[i];
 }
 return 2*smallOutputSize;
}

int main(){
	string s;
	cin>>s;
	string *o=new string[133];
	

	int count=subs(s,o);
	for (int i = 0; i < count; ++i)
	{
		cout<<o[i]<<endl;
	}
}	