#include<bits/stdc++.h>
using namespace std;

bool helper(string s,int start,int end){

if (start==end)		
{
	return true;
}

if (s[start]!=s[end])
{
	return false;
}

if (start<end+1)
{
	return helper(s,start+1,end-1);
}
return true;
}

bool palin(string s){
	int start=0;
	int end=s.length()-1;
	if (s.length()==0)
{
	return true;
	
}

return helper(s,start+1,end-1);


	



}
int main(){
	string s;
	cin>>s;
	
	cout<<palin(s);
}
