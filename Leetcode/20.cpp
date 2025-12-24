#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string str){
    stack<char> ch;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            ch.push(str[i]);
        }else{
            if(str.size()==0){
                return false;
            }
            if((ch.top()=='(' && str[i]==')') || (ch.top()=='[' && str[i]==']') || (ch.top()=='{' && str[i]=='}')){
                ch.pop();
            }else{
                return false;
            }
            
        }
    }
    return ch.size()==0; //when size of stack(ch) becomes 0 return true means stack is now empty
}
int main(){
    string str;
    cout<<"Input string : ";
    cin>>str;
    if(isValid(str)){
        cout<<"Valid"<<endl;
    }else{
        cout<<"Not Valid"<<endl;
    }
    return 0;
}