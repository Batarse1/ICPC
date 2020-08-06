#include <iostream>

using namespace std;

int main(){
    int a;
    double b;
    int k=0;
    float duration_in_months=0;
    double down_payment=0;
    double loan=0;
    double initial_value=0;
    double car_value=0;
    double monthly_payment=0;
    double payment=0;
    double test=0;
    double depreciation=0;
    float number_of_depreciation_records=0;
    double static records[101];
    cin>>duration_in_months>>down_payment>>loan>>number_of_depreciation_records;
    while(!(duration_in_months<0)){
        k=-1;
        initial_value=down_payment+loan;
        monthly_payment=loan/duration_in_months;
        test=initial_value;
        car_value=initial_value;
        for(int i=0;i<101;i++){
            records[i]=0;
        }
        for(int i=0;i<number_of_depreciation_records;i++){
            cin>>a>>b;
            records[a]=b;
        }
        while(k<duration_in_months and test>=car_value){
            k++;
            if(records[k]!=0){
                depreciation=records[k];
            }
            if(k==0){
                payment=down_payment;
                car_value=initial_value-initial_value*depreciation;
            }
            else{
                payment+=monthly_payment;
                car_value-=car_value*depreciation;
            }
            test=initial_value-payment;
        }
        if(k==1){
            cout<<k<<" month"<<endl;
        }
        else{
            cout<<k<<" months"<<endl;
        }
        cin>>duration_in_months>>down_payment>>loan>>number_of_depreciation_records;
    }
    return 0;
}