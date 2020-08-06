#include <iostream>
#include <string>

using namespace std;

int main(){
    string a=" ";
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=="1" or a=="4" or a=="78"){
            cout<<"+"<<endl;
        }
        else if(a.at(a.size()-1)=='5' and a.at(a.size()-2)=='3'){
            cout<<"-"<<endl;
        }
        else if(a.at(0)=='9' and a.at(a.size()-1)=='4'){
            cout<<"*"<<endl;
        }
        else if(a.at(0)=='1' and a.at(1)=='9' and a.at(2)=='0' ){
            cout<<"?"<<endl;
        }
    }
    return 0;
}