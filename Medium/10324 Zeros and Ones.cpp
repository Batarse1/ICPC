#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n=0,x=0,y=0,cont=0;
    bool thesame=true;
    string cadena="";
    while(getline(cin,cadena)){
        if(cadena==""){
            break;
        }
        cont++;
        cin>>n;
        cout<<"Case "<<cont<<":"<<endl;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            thesame=true;
            for(int j=min(x,y);j<max(x,y);j++){
                if(cadena.at(j)!=cadena.at(j+1)){
                    thesame=false;
                }
            }
            if(thesame==true){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        cin.clear();cin.ignore(1000,'\n');
    }
    return 0;
}