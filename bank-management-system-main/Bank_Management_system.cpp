#include<iostream>
using namespace std;
class Bank
{
	private:
		string name,email;
		int ac_no,ph_no;
	public:
		void get()
		{
			cout<<"\t\t\t    Enter The Name Of Staff             : ";
			cin>>name;
			cout<<"\t\t\t    Enter The Account Number Of Staff   : ";
			cin>>ac_no;
			cout<<"\t\t\t    Enter The Phone Number Of Staff     : ";
			cin>>ph_no;
			cout<<"\t\t\t    Enter The E-mail Of Staff           : ";
			cin>>email;	
		}
		void set()
		{
			cout<<"\t\t   -------------------------------------------------------------------------------\n";
			cout<<"\t\t   Name            : "<<name<<endl;
			cout<<"\t\t   Account No.     : "<<ac_no<<endl;
			cout<<"\t\t   Phone No.       : "<<ph_no<<endl;
			cout<<"\t\t   E-mail          : "<<email<<endl;	
			cout<<"\t\t   -------------------------------------------------------------------------------\n\n";
			cout<<"\t\t\t\t\t  Press [1] to Deposite the Money : \n\n";
			cout<<"\t\t\t\t\t  Press [2] to Transfer the Money : \n\n";
			cout<<"\t\t\t\t\t  Press [3] to Withdraw the Money : \n\n";
		}	
};
int main()
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t   -: BANK MANAGEMENT SYSTEM :-\n";
	cout<<"\t\t\t\t----------------------------------------------------\n\n";
	cout<<"\t\t\t\t\t -: Designed and Programmed By :-\n";
	cout<<"\t\t\t\t----------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t   Harsh Patel\n\n\n";
	char n,s;
	cout<<"\t\t\t\t\tPress key N and Enter to Continue...";
	cin>>n;
	cout<<"\n\n\n\n\n\n"; 
	
	cout<<"\t\t   -------------------------------------------------------------------------------\n";		
	cout<<"\t\t\t   -: Press A to Log as Administrator Press S to Log as Staff :- \n";
	cout<<"\t\t   -------------------------------------------------------------------------------\n\n";
	cin>>s;
	cout<<"\n\n\n\n\n\n";
	
	if(s =='A' || s =='a') 
	{
		cout<<"\t\t\t\t\t     Welcome as ADMINISTRATOR.....\n";	
	}
	else
	{
		if(s=='S' || s =='s')
		{
			Bank b1;
			cout<<"\t\t   -------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\t\t      -: Welcome as STAFF :- \n";
			cout<<"\t\t   -------------------------------------------------------------------------------\n\n";
			b1.get();
			cout<<"\n\n\n\n\n\n";
			b1.set();
			cout<<"\n\n\n\n\n\n";
			
			int ch;
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
						int amt=500000,x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n";
						cout<<"\t\t\tDepsosit the money : ";
						cin>>x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n\n";
						cout<<"\t\t\tYour Actual Amount is : "<<amt<<endl;
						cout<<"\t\t\tCongrates Your Amount Has Deposite Successfully\n";
						cout<<"\t\t\tYour Account Balance is : "<<amt+x<<endl;
						break;
					}
				case 2:
					{
						int amt=500000,x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n";
						cout<<"\t\t\tTransfer the money : ";
						cin>>x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n\n";
						cout<<"\t\t\tYour Actual Amount is : "<<amt<<endl;
						cout<<"\t\t\tCongrates Your Amount Has Transfer Successfully\n";
						cout<<"\t\t\tYour Account Balance is : "<<amt-x<<endl;
						break;
					}
				case 3:
					{
						int amt=500000,x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n";
						cout<<"\t\t\tWithdraw the money : ";
						cin>>x;
						cout<<"\t\t   --------------------------------------------------------------------------------\n\n";
						cout<<"\t\t\tYour Actual Amount is : "<<amt<<endl;
						cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully\n";
						cout<<"\t\t\tYour Account Balance is : "<<amt-x<<endl;
						break;
					}
				default:
					{
						cout<<"\t\t\t\t   ...............WRONG CHOICE...............";
					}			
			}	
		}
	}	
	
}
