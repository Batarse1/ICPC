#include <iostream>

using namespace std;

int main(){
    int a=0,b=0,c=0,d=0;
    int number_of_degrees=0;
    cin>>a>>b>>c>>d;
    while(a!=0 or b!=0 or c!=0 or d!=0){
        number_of_degrees=(360*2);
        if(b>a){
            number_of_degrees+=(40-b)*9+a*9;
        }
        else if(a>b){
            number_of_degrees+=(40-b)*9-(40-a)*9;
        }
        number_of_degrees+=360;
        if(c>b){
            number_of_degrees+=(c-b)*9;
        }
        else if(b>c){
            number_of_degrees+=c*9+(40-b)*9;
        }
        
        if(d>c){
            number_of_degrees+=(40-d)*9+c*9;
        }
        else if(c>d){
            number_of_degrees+=(40-d)*9-(40-c)*9;
        }
        cout<<number_of_degrees<<endl;
        number_of_degrees=0;
        cin>>a>>b>>c>>d;
    }
    return 0;
}