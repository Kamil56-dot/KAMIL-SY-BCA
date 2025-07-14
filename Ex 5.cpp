#include <iostream>
using namespace std;

int main() {
	int k=57;
	
	cout<<"The Number is :"<<k<<endl;
	k++;
	cout<<"After post increment by 1 the number is :"<<k<<endl;
	++k;
	cout<<"After pre increment by 1 the number is :"<<k<<endl;
	k+=1;
	cout<<"After increasing by 1 the number is :"<<k<<endl;
	
	k--;
	cout<<"After post decrement by 1 the number is :"<<k<<endl;
	
	--k;
	cout<<"After pre decrement by 1 the number is :"<<k<<endl;
	
	k-=1;
	cout<<"After decreasing by 1 the number is :"<<k<<endl;
	return 0;
}