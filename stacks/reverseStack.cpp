#include <bits/stdc++.h>
using namespace std;
void insertBottom(stack<int>& st,int data){
if (st.size()==0)
{
	st.push(data);
	return;
}
int x=st.top();
st.pop();
insertBottom(st,data);
st.push(x);
}
void reverseStack(stack<int>& s){

if (s.size()==0)
{
	return;
}
int x=s.top();
s.pop();
reverseStack(s);
 insertBottom(s,x);

}
int main(){

	stack<int> s1;
	int a;
	cin>>a;
	int element;
	for (int i = 0; i <a; ++i)
	{
		cin>>element;
		s1.push(element);
	}
	reverseStack(s1);
	for (int i = 0; i < a; ++i)
	{
		cout<<s1.top()<<endl;
		s1.pop();
	}

}