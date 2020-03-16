#include <iostream>

using namespace std;

int main(){
    int n=0;
    int k=0;
    int j=0;
    cin>>n;
    string nombres[n];
    for(int i=0;i<n;i++){
        cin>>nombres[i];
    }
    while(j<n){
        cout<<nombres[k]<<": Happy"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": birthday"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": to"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": you"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": Happy"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": birthday"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": to"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": you"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": Happy"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": birthday"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": to"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": Rujia"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": Happy"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": birthday"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": to"<<endl;
        j++;
        k++;
        k=k%n;
        cout<<nombres[k]<<": you"<<endl;
        j++;
        k++;
        k=k%n;
    }
    return 0;
}