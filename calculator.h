#include <iostream>
using namespace std;

inline void show() {
	double a,b;
	char op;
	
	cout<<"Enter First Number:";
	cin>>a;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<"Enter Operator(+,-,*,/):";
	cin>>op;
	
	switch(op) {
		case '+':
			cout<<"Addition:"<<a+b;
			break;
		case '-':
			cout<<"Subtraction:"<<a-b;
			break;
		case '*':
			cout<<"Multiplication:"<<a*b;
			break;
		case '/':
			if(b!=0) {
				cout<<"Division:"<<a/b;
			}else{
				cout<<"Invalid Division!";
			}
			break;
		default:
		    cout<<"Error!Invalid Operator";	
			}
				
}
