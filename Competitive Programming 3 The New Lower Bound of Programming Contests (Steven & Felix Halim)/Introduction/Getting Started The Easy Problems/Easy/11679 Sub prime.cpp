#include <iostream>

using namespace std;

int main(){
    bool possible=true;
    int B=0;
    int N=0;
    int debtor_bank=0;
    int creditor_bank=0;
    long debenture_value=0;
    while(cin>>B>>N){
        if(B==0 and N==0){
            break;
        }
        possible=true;
        long monetary_reserve[B]={};
        long banks[B]={};
        for(int i=0;i<B;i++){
            cin>>monetary_reserve[i];
        }
        for(int i=0;i<N;i++){
            cin>>debtor_bank>>creditor_bank>>debenture_value;
            banks[(debtor_bank-1)]+=debenture_value;
            banks[(creditor_bank-1)]+=-debenture_value;
        }
        for(int i=0;i<B;i++){
            if(monetary_reserve[i]<banks[i]){
                possible=false;
            }
        }
        if(possible==true){
            cout<<'S'<<endl;
        }
        else{
            cout<<'N'<<endl;
        }
    }
    return 0;
}