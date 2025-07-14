#include <iostream>
using namespace std;

int main() {
	int value;
	
	cout<<"Enter a value:";
	cin>>value;
	
	if(value>0) {
		cout<<"Value is Positive:"<<value<<endl;
	} else if(value<0) {
		cout<<"Value is Negative:"<<value<<endl;
	} else {
		cout<<"Value is Zero:"<<value<<endl;
	}
	
	return 0;
}
		