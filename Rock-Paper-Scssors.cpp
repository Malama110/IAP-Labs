#include <iostream>
#include <string>
using namespace std;
int main(){
	string pone;
	string ptwo;
	cin>>pone>>ptwo;
	if(pone==ptwo){
		cout<<"Tie"<<endl;
	}
	else if(pone=="rock" and ptwo=="paper"){
		cout<<"Player 2 wins"<<endl;
	}
	else if(pone=="scissors" and ptwo=="rock"){
		cout<<"Player 2 wins"<<endl;
	}
	else if(pone=="paper" and ptwo=="rock"){
		cout<<"Player 1 wins"<<endl;
	}
	else if(pone=="rock" and ptwo=="scissors"){
		cout<<"Player 1 wins"<<endl;
	}
	else if(pone=="paper" and ptwo=="scissors"){
		cout<<"Player 2 wins"<<endl;
	}
	else if(pone=="scissors" and ptwo=="paper"){
		cout<<"Player 1 wins"<<endl;
	}
	return 0;
}
