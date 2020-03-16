#include <iostream>

using namespace std;

int main (){
    int T=0;
    int a=0;
    int b=0;
    int up=0;
    int down=0;
    while(cin>>a>>b){
        if(a==-1 and b==-1){
            break;
        }
        up=0;
        down=0;
        if(b>a){
            up=b-a;
            down=a+100-b;
        }
        else if(b<a){
            down=a-b;
            up=b+100-a;
        }
        if(up<down){
            cout<<up<<endl;
        }
        else{
            cout<<down<<endl;
        }
    }
    return 0;
}