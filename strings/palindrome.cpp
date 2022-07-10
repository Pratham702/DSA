#include<bits/stdc++.h>
using namespace std;


	
	int isPalindrome(string s)
	{
		for (int i = 0; i < s.size()/2; ++i)
		{
			if (s.size()%2==0)
			{
				if (s[i]==s[s.size()+i])
				{
					return 1;
				}
			}else{
				if (s[i]==s[s.size()+i+1])
				{
					return 1;
				}
			}
		}
	    return 0;
	}



int main(){

string s;
cin>>s;
cout<<isPalindrome(s);
}