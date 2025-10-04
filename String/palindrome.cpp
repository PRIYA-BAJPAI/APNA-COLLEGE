#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    char temp;
    
    cout<<"input string-->";
    getline(cin,str);
    int n=str.size();
    // reverse(str.begin(),str.end());
    int st=0;
    int e=n-1;
    while(st<e){
        if(str[st]==str[e]){
            st++;
            e--;
        }else{
            break;
        }
    }
    if(st==e){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}