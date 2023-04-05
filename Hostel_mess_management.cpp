#include<iostream>
using namespace std;
// M=mess management system for boys and girls 
class M{
	public:
		int getoption(){
				cout<<"\n 1. Register a student ";
				cout<<"\n 2. Menu for the  Hostel  ";
				cout<<"\n 3. Mess Fess for the  Hostel  ";
				cout<<"\n 4. Mess Meber Committee"<<endl;
			    int choice;
			    cin>>choice;
			    switch(choice){
			   	case 1:registeration();
			    	break;
			    	case 2:set_menu();
			    	break;
			    	case 3:mess_bill();
			    	break;
			    	case 4:mmc();
			    	break;
			    	default:cout<<"\n Invalid choice, Enter again "<<endl;
			    	break;
				}
				
		}
		
	
		int registeration(){
			cout<<"\n---Form to register student---\n";
			string name,username,password,rollno,father,Hostelnumber;
			cout<<"\n Enter Name:";
			cin>>name;
				cout<<"\n Enter Username:";
			cin>>username;
				cout<<"\n Enter Password:";
			cin>>password;
				cout<<"\n Enter rollno:";
			cin>>rollno;
			cout<<"\n Enter father_name:-";
			cin>>father;
				cout<<"\n Enter Hostelnumber:";
			cin>>Hostelnumber;
			cout<<"\n student registered successfully ";	
		}
		
    void set_menu(){
    	cout<<"Monday"<<"::"<< " "<<"Breakfast:- Burger && Eggs/milk"<<" "<<"Lunch:- Pulaw"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
    	cout<<"Tuesday"<<"::"<< " "<<"Breakfast:-Puri-Sabji "<<" "<<"Lunch:- Rice-dal"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
    	cout<<"Wednesday"<<"::"<< " "<<"Breakfast:- Bhature"<<" "<<"Lunch:- Rice-dal-curd"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
    	cout<<"Thrusday"<<"::"<< " "<<"Breakfast:- Dosa"<<" "<<"Lunch:- Rice-dal"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
    	cout<<"Friday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- Rice-chhole"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
    	cout<<"Saturday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- kitchari"<<" "<<"Dinner:-Fish/Paneer"<<endl<<endl;
    	cout<<"Sunday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- Rice-dal-curd"<<" "<<"Dinner:-Chicken/Paneer/Frooti"<<endl<<endl;
    	
	}
	int mess_bill(){
		string name,father,semester,branch,hostel;
		int registeration_number,mobile_number,mess_advance,bhm_contribution,total_amount;
		cout<<"\n Enter Name:";
		cin>>name;
		cout<<"\n Enter Father_Name:";
		cin>>father;
		cout<<"\n Enter semester:";
		cin>>semester;
		cout<<"\n Enter registeration_number:";
		cin>>registeration_number;
		cout<<"\n Enter Branch:";
		cin>>branch;
		cout<<"\n Enter Hostel_name:-";
		cin>>hostel;
		cout<<"\n Enter Mobile_number:-";
		cin>>mobile_number;
		cout<<"\n Enter mess_advance:-";
		cin>>mess_advance;
		cout<<"\n Enter bhm-contribution:-";
		cin>>bhm_contribution;
		cout<<"\n Enter total-amount"<<":-"<<mess_advance+bhm_contribution<<endl;	
	}
	void mmc(){
		string prefect,ass_prefect;
		cout<<"\n prefect-name:-";
		cin>>prefect;
		cout<<"\n ass-prefect-name:-";
		cin>>ass_prefect;
		cout<<"\n Other mmc's name--"<<endl;
		string mess_member;
		for(int i=0;i<5;i++ )
		{
			cin>>mess_member;
			
		}
		cout<<"Mess_member name :-"<<endl;
		for(int i=0;i<5;i++ )
		{
			
			cout<<mess_member<<endl;
		}
			
	}
	 
};
int main(){
	cout<<endl;
	cout<<"  "<<" "<<" "<<"NIT SILCHAR HOSTEL MESS MANAGEMENT SYSTEM "<<endl;
	M boys;
	M girls;
	int option;
	cout<<" "<<" "<<"\nEnter value of option is equal to 1 for boys hostel and 2 for girls hostel "<<endl;
	cin>>option;
	if(option==1)
	boys.getoption();
	if(option==2)
	girls.getoption();
}