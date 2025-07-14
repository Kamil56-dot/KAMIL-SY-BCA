#include <iostream>
#include <ctime>
using namespace std;

int main() {
	time_t presentTime=time(0);
	tm* currentDateTime=
	localtime(&presentTime);
	
	cout<<"Current Date And Time:"<<endl;
	
	cout<<(currentDateTime->tm_year+1900)<<"-";
	cout<<(currentDateTime->tm_mon+1)<<"-";
	cout<<currentDateTime->tm_mday<<" ";
	cout<<currentDateTime->tm_hour<<"-";
	cout<<currentDateTime->tm_min<<"-";
	cout<<currentDateTime->tm_sec<<endl;
	
	return 0;
}
	