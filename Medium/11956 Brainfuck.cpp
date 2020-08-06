#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    short T = 0;
    int circularArray[100] = {0};
    short index = 0;
    string commands = "\0";
    cin>>T;
    cin.clear();cin.ignore(10000, '\n');
    for(int i=0;i<T;i++){
        getline(cin,commands);
        for(int j=0;j<commands.length();j++){
            if(commands.at(j) == '>'){
                index++;
                if(index==100){
                    index=0;
                }
            }
            else if(commands.at(j) == '<'){
                index--;
                if(index==-1){
                    index=99;
                }
            }
            else if(commands.at(j) == '+'){
                circularArray[index]++;
                if(circularArray[index]==256){
                    circularArray[index]=0;
                }
            }
            else if(commands.at(j) == '-'){
                circularArray[index]--;
                if(circularArray[index]==-1){
                    circularArray[index]=255;
                }
            }
        }
        cout<<"Case "<<dec<<i + 1<<":";
        for(int j=0;j<100;j++){
            cout<<" "<<uppercase<<hex<<setw(2)<<setfill('0')<<circularArray[j];
            circularArray[j] = 0;
        }
        cout<<endl;
        index=0;
    }
    return 0;
}