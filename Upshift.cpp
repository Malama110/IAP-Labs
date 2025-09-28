#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    string upShift;
    int asci;
    cin>>word;
    int count=word.length();
    for(int i=0;i<count;i++){
        asci=word[i]+1;
        char b=asci;
        upShift+=b;
    }
    cout<<upShift<<endl;
    return 0;
}