#include <iostream>
using namespace std;


void momoPrompt(){

	int menuOption;
	string mobileNumber;
	string confirmNumber;
	float amount;
	string referenceNumber;
	int pin;
	int count;
	
	// Main menu options after dialing your short code.
		cout << "Menu"<<endl;
		cout << "1) Transfer Money"<<endl;
		cout << "2) MoMoPay & Pay Bill"<<endl;
		cout << "3) Airtime & Bundles"<<endl;
		cout << "4) Allow Cash Out"<<endl;
		cout << "5) Financial Services"<<endl;
		cout << "6) My Wallet"<<endl;
		cout << "0) Exit"<<endl;
		
		
	cin>>menuOption;
	system("cls");
	switch (menuOption){
		// How to send money to someone
		case 1:
		cout << "Transfer Money"<<endl;
		cout << "1) MoMo User"<<endl;
		cout << "2) Non MoMo User"<<endl;
		cout << "3) Send with Care"<<endl;
		cout << "4) Favorite"<<endl;
		cout << "5) Other Networks"<<endl;
		cout << "6) Bank Accout"<<endl;
		cout << "0) Back"<<endl;
		
		cin >>menuOption;
		system("cls");
		
		if(menuOption == 1){
			cout<<"Enter Mobile Number: "<<endl;
			cin>>mobileNumber;
			system("cls");
			
			cout<<"Confirm Mobile Number: "<<endl;
			cin>>confirmNumber;
				system("cls");
		
		 if (mobileNumber.length() !=10){
			cout<<"Invalid Number"<<endl;
		}
			
		else if (mobileNumber != confirmNumber){
			cout<<"Number Mismatch";
		}
		
		else {
			cout<<"Enter Amount: "<<endl;
			cin>>amount;
				system("cls");
			
			cout<<"Enter Reference Number: "<<endl;
			cin>>referenceNumber;
				system("cls");
			
			cout<<"Transfer to - Assa Godfred Takyi "<<mobileNumber<<" for GHS"<<amount<<" with Reference number: "<<referenceNumber<<"."<<" Fee is GHS 0.50 , Tax amount is GHS 0.10"<<endl;
			cout<<"Enter your MoMo pin: "<<endl;
			cin>>pin;
				system("cls");
			if (pin == 0000){
			cout<<"You have sent "<<amount<<" to - Assa Godfred Takyi"<<mobileNumber<<" Fee: GHS 0.50. Tax: GHS 0.50. Messesage - Your balance is GHS33.62"<<endl;	
			}
			else {
					cout<<"Incorrect Mobile Money PIN"<<endl;
				}	
			
					
		}
		
			
		}
		break;
		// Cheking balance
		case 6:
		cout << "My Wallet"<<endl;
		cout << "1) Check Balance"<<endl;
		cout << "2) Allow Cash Out"<<endl;
		cout << "3) My Approvals"<<endl;
		cout << "4) Report Fraud"<<endl;
		cout << "5) Statements"<<endl;
		cout << "6) Change & Reset PIN"<<endl;
		cout << "7) Airtime"<<endl;
		cout << "#) for next"<<endl;
		
		cin>>menuOption;
		system("cls");
		
		if (menuOption == 1){
			do {
			cout<<"Fee is GHS 0.00. Enter MM PIN: "<<endl;
			cin>>pin;
			system("cls");
			
			if (pin == 0000){
				cout<<"Current Balance: GHS 1000.00, Available Balance: GHS 1000.00"<<endl;
				}
				else {
					cout<<"Incorrect Mobile Money PIN"<<endl;
				}
				count++;
			} while(pin != 0000 && count < 3);
				
		} else if (menuOption == 6){
			cout<<"Change & Reset PIN"<<endl;
			cout<<"1) Change PIN"<<endl;
			cout<<"2) Reset PIN"<<endl;
			cout<<"0) Back"<<endl;
			
		cin>>menuOption;
		system("cls");
			if (menuOption == 2){
				cout<<"Your pin has been resert to: 0000"<<endl;
				
			}
			
		}
	 
	}

		
	
	}
	

int main(int argc, char** argv) 
{
	
	int userInput;
	
	
	string shortcode;
	cout<<"Enter your short code:"<<endl;
	cin>>shortcode;
	system("cls");
	
	// Authentication
	if(shortcode == "*170#"){
	do {
	momoPrompt();
	cout<<"Do you want to perform any other action?"<<endl;
	cout << "1) Yes"<<endl;
	cout << "2) Exit"<<endl;
	cin >> userInput;
	system("cls");
	}while(userInput == 1);
	}else{
		cout<<"unknown application"<<endl;	
	}
	
	
	
	
	
	return 0;
}

