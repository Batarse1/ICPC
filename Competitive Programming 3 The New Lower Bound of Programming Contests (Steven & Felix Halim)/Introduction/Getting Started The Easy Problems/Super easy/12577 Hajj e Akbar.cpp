#include <iostream>

using namespace std;

int main(){
    int cont=0;
    string n=" ";
    cin>>n;
    while(n!="*"){
        cont++;
        if(n=="Umrah"){
            cout<<"Case "<<cont<<": Hajj-e-Asghar"<<endl;
        }
        else{
            cout<<"Case "<<cont<<": Hajj-e-Akbar"<<endl;
        }
        cin>>n;
    }
    return 0;
}