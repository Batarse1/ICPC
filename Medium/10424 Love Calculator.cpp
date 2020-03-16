#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int sum1=0,sum2=0;
    float max=0,min=0;
    string lover1="",lover2="";
    while(getline(cin,lover1),getline(cin,lover2)){
        sum1=0;
        sum2=0;
        for(int i=0;i<lover1.size();i++){
            if(lover1.at(i)>='a' and lover1.at(i)<='z'){
                sum1+=lover1.at(i)-'a'+1;
            }
            else if(lover1.at(i)>='A' and lover1.at(i)<='Z'){
                sum1+=lover1.at(i)-'A'+1;
            }
        }
        if(sum1%9==0){
            sum1=9;
        }
        else{
            sum1%=9;
        }
        for(int i=0;i<lover2.size();i++){
            if(lover2.at(i)>='a' and lover2.at(i)<='z'){
                sum2+=lover2.at(i)-'a'+1;
            }
            else if(lover2.at(i)>='A' and lover2.at(i)<='Z'){
                sum2+=lover2.at(i)-'A'+1;
            }
        }
        if(sum2%9==0){
            sum2=9;
        }
        else{
            sum2%=9;
        }
        if(sum1>sum2){
            max=sum1;
            min=sum2;
        }
        else{
            max=sum2;
            min=sum1;
        }
        cout<<fixed<<setprecision(2)<<min/max*100<<" %"<<endl;
    }
    return 0;
}