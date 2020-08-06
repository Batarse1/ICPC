#include <iostream>

using namespace std;

int main(){
    int day=0;
    float H=0;
    float U=0;
    float D=0;
    float F=0;
    float distance=0;
    float distance_lost=0;
    while(cin>>H>>U>>D>>F){
        if(H==0){
            break;
        }
        day=0;
        distance=0;
        distance_lost=F/100*U;
        while(true){
            day++;
            distance+=U;
            if(distance>H){
                cout<<"success on day "<<day<<endl;
                break;
            }
            distance-=D;
            if(distance<0){
                cout<<"failure on day "<<day<<endl;
                break;
            }
            if(U-distance_lost<=0){
                U=0;
            }
            else{
                U-=distance_lost;
            }
        }
    }
    return 0;
}