#include <iostream>

using namespace std;

int main(){
    bool camas=false;
    int N=0;
    long B=0;
    int H=0;
    int W=0;
    int p=0;
    int a=0;
    long sum=0;
    long mejor=0;
    while(cin>>N>>B>>H>>W){
        mejor=B+1;
        for(int i=0;i<H;i++){
            cin>>p;
            camas=false;
            for(int j=0;j<W;j++){
                cin>>a;
                if(a>=N){
                    camas=true;
                }
            }
            if(camas==true){
                sum=p*N;
                if(sum<mejor and sum<=B){
                    mejor=sum;
                }
            }
        }
        if(mejor<=B){
            cout<<mejor<<endl;
        }
        else{
            cout<<"stay home"<<endl;
        }
    }
    return 0;
}