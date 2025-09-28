#include <iostream>
using namespace std;
int main(){
	double sum=0;
	int n=0;
	double x;
	double mean;
	cin>>x;
	while(x!=-1){
		sum+=x;
		n+=1;
		cin>>x;
	}
	mean=sum/n;
	cout<<mean<<endl;
	return 0;
}
	
