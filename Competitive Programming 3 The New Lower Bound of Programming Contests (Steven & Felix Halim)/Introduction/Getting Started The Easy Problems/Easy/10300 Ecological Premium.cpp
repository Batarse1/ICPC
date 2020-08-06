#include <iostream>

using namespace std;

int main(){
    int n=0;
    int f=0;
    double a=0,b=0,c=0;
    double space_average=0;
    double sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>f;
        for(int j=0;j<f;j++){
            cin>>a>>b>>c;
            space_average=a/b;
            sum+=(space_average*c*b);
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}