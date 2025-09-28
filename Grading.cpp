#include <iostream>
using namespace std;
int main(){
  int x;
  cin>>x;
  if(x>74){
    cout<<"First"<<endl;
  }
  else if(x>69){
    cout<<"Upper second"<<endl;
  }
  else if(x>50){
    cout<<"Lower second"<<endl;
  }
  else if(x>49){
    cout<<"Third"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
  return 0;
}
