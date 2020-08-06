#include <iostream>
#include <string>

using namespace std;

void recursiveFunction(string digits,int cont);

int main(){
    string Line="\0";
    while(getline(cin,Line)){
        if(Line=="END"){
            break;
        }
        recursiveFunction(Line,1);
    }
    return 0;
}

void recursiveFunction(string digits,int cont){
    if(digits=="1"){
        cout<<cont<<endl;
    }
    else{
        recursiveFunction(to_string(digits.size()),++cont);
    }
}