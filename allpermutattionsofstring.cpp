#include<iostream>
using namespace std;
void printsubstring1(string str, string ans){
    //Base Case
    if (str.length() == 0){
        cout << ans << endl; 
        return;
    }

    //Recursive Case
    for(int i=0; i< str.length(); i++){
        char ch= str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        printsubstring1(ros, ans + ch);
    }
}

int main(){

    printsubstring1("abc", "");
    return 0;

}