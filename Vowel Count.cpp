#include <iostream>
#include <string>
using namespace std;
int main(){
    string vowels="aeiouAEIOU";
    int count=0;
    string word;
    getline(cin, word);
    while(word !="end"){
        for(char i:word){
            if(vowels.find(i)!=string::npos){
                count++;
                    }
        }
        cout<<count<<endl;
        count=0;
        getline(cin,word);
    }    

    return 0;
}