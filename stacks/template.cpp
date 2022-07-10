#include<iostream>
using namespace std;

template <typename T,typename Y>

class Pair{
	T a;
	Y b;
public:
	void setA(T a){
		this->a=a;
	}
	void setB(Y b){
		this->b=b;
	}

	T getA(){
		return a;
	}
	Y getB(){
		return b;

	}
};
int main(){
	Pair<int,double> p;
	p.setB(4.23);
	p.setA(2.23);
	cout<<p.getB()<<endl;
	cout<<p.getA()<<endl;
	Pair<Pair<int,int>,double> p2;

	Pair<int,int> p3;
	p3.setA(6);
	p3.setB(0);
	p2.setA(p3);
	p2.setB(4.32);
	cout<<p2.getB();
}

