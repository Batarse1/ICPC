#include <iostream>
#include <string>

using namespace std;

int main(){
    int T=0;
    int n=0;
    int sum=0;
    string aux=" ";
    int number=0;
    cin>>T;
    for(int i=0;i<T;i++){
        sum=0;
        cin>>n;
        int instructions[n]={};
        cin.clear();cin.ignore(1000,'\n');
        for(int j=0;j<n;j++){
            getline(cin,aux);
            if(aux=="RIGHT"){
                sum+=1;
                instructions[j]=1;
            }
            else if(aux=="LEFT"){
                sum+=-1;
                instructions[j]=-1;
            }
            else{
                number=stoi(&aux.at(8));
                sum+=instructions[number-1];
                instructions[j]=instructions[number-1];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}