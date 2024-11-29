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
		
		
	};
	
	int entryDays(){
		int n;
			cout<<"How long do you want this app to help you track your responses?(In days)"<<endl;
			cin>>n;
			return n;
		}
	
	void entryData(int n,everyDay a[])
	{
		int i=0;
		if (i<=n-1)
		{
		cout<<"___________Recording the data for day"<<i+1<<"___________"<<endl;
		}
		else
		{
			cout<<"Your tarcking days are complete, generating report:";
		}
		cout<<"How much money did you spend today?"<<endl;
		cin>>a[i].spent;
		cout<<"How much money did you make today?"<<endl;
		cin>>a[i].income;
		}
		void calculations(everyDay a[])
		{
			cout<<"ypu spent thismuch today";
		}
		
	int main()
	{
	int days=entryDays();
	everyDay* OK = new everyDay[days];
	entryData(days,OK);
	calculations(OK);
		return 0;
	}
