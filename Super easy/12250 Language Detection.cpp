#include <iostream>
#include <string>

using namespace std;

int main(){
    int cont=0;
    string saludo=" ";
    cin>>saludo;
    while(saludo!="#"){
        cont++;
        if(saludo=="HELLO"){
            cout<<"Case "<<cont<<": ENGLISH"<<endl;
        }
        else if(saludo=="HOLA"){
            cout<<"Case "<<cont<<": SPANISH"<<endl;
        }
        else if(saludo=="HALLO"){
            cout<<"Case "<<cont<<": GERMAN"<<endl;
        }
        else if(saludo=="BONJOUR"){
            cout<<"Case "<<cont<<": FRENCH"<<endl;
        }
        else if(saludo=="CIAO"){
            cout<<"Case "<<cont<<": ITALIAN"<<endl;
        }
        else if(saludo=="ZDRAVSTVUJTE"){
            cout<<"Case "<<cont<<": RUSSIAN"<<endl;
        }
        else{
            cout<<"Case "<<cont<<": UNKNOWN"<<endl;
        }
        cin>>saludo;
    }
    return 0;
}