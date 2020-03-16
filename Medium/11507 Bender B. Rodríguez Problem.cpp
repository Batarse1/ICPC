#include <iostream>
#include <string>

using namespace std;

int main(){
	long length=0;
	string decision="";
	string ans="";
	while(cin>>length){
		if(length==0){
			break;
		}
		ans="+x";
		for(int i=0;i<length-1;i++){
			cin>>decision;
			if(decision=="No"){
			}
			else{
				if(ans=="+x"){
					ans=decision;
				}
				else if(ans=="+y"){
					if(decision=="+y"){
						ans="-x";
					}
					else if(decision=="-y"){
						ans="+x";
					}
				}
				else if(ans=="+z"){
					if(decision=="+z"){
						ans="-x";
					}
					else if(decision=="-z"){
						ans="+x";
					}
				}
				else if(ans=="-x"){
					if(decision=="+y"){
						ans="-y";
					}
					else if(decision=="-y"){
						ans="+y";
					}
					if(decision=="+z"){
						ans="-z";
					}
					else if(decision=="-z"){
						ans="+z";
					}
				}
				else if(ans=="-y"){
					if(decision=="+y"){
						ans="+x";
					}
					else if(decision=="-y"){
						ans="-x";
					}	
				}
				else if(ans=="-z"){
					if(decision=="+z"){
						ans="+x";
					}
					else if(decision=="-z"){
						ans="-x";
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}