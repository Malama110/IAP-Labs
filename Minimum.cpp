#include <iostream>
using namespace std;
int main(){
	int x;
	int min;
	cin>>x;
	min=x;
	while(x!=-1){
		if(x<min){
			min=x;
		}
		cin>>x;
	}
	cout<<min<<endl;
	return 0;
}
