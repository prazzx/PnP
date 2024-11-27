#include<iostream>
#include<string>
using namespace std;
class everyDay {
	public:
	int spent;
	int income;
	string spentType;
	string incomeType;
	int days;
	public:
		everyDay(int S, int I, string St, string It, int D){
			spent=S;
			income=I;
			spentType=St;
			incomeType=It;
			days=D;
		}
		
		void entryData(){
			cout<<"How long do you want this app to help you track your responses?(In days)"<<endl;
			cin>>days;
			for(int i=0;i<days;i++){
			cout<<"___________Recording the data for day"<<i<<"___________"<<endl;
			}
		}
	};
	
	int main()
	{
		return 0;
	}
