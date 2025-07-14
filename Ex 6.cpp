#include <iostream>
using namespace std;

int main() {
	int m=7;
	int n=4;
	
	cout<<"Swap two numbers using XOR:"<<endl;
	
	cout<<"Before Swapping"<<endl;
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
	
	m=m^n;
	n=m^n;
	m=m^n;
	
	cout<<"After Swapping"<<endl;
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
	
	return 0;
}