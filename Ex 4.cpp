#include <iostream>
using namespace std;

int main() {
	int p,q,r;
	int minimum,maximum;
	
	cout<<"Enter Three Numbers:"<<endl;
	cin>>p>>q>>r;
	
	if(a<=b&&a<=c) {
		minimum=a;
	} else if(b<=a&&b<=c) {
		minimum=b;
	}else{
		minimum=c;
	}
	
	if(a>=b&&a>=c) {
		maximum=a;
	} else if(b>=a&&b>=c) {
		maximum=b;
	}else{
		maximum=c;
	}
	
	cout<<"Minimum value is :"<<minimum<<endl;
	
	cout<<"Maximum value is :"<<maximum<<endl;
	
	return 0;
}
	