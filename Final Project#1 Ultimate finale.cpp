#include <iostream>
#include <array>
#include <string>
using namespace std;

int age = 0,   bags = 0, city;
string name; 
double  weight = 0;

 const int maxprohib = 3;

int main(){
 string prohibitems [maxprohib] = {"gun", "knife", "explosives"};
	string itemtocheck;
	bool isprohib = false;
  int age;
  
	cout<<"-----------------Ticket Booking-------------------"<<endl;
	cout<<"Enter name: ";
	cin>>name;
	
	
	cout<<"Enter age: ";
	cin>>age;
	
	if (age >= 70){
		cout<<"You are not eligible to fly. "<<endl;
	}
	
	else {
	
	cout<<"Enter "<<endl;
	
	cout<<"1 for Islamabad"<<"\n"<<"2 for Lahore"<<"\n"<<"3 for Istanbul"<<"\n"<<"4 for Zurich"<<endl;
	
	cout<<"Enter the number of city which you want to visit: ";
	cin>>city;
	
	
	
	
	cout<<"-----------------------Ticket--------------------"<<endl;
	
	switch (city){
		case 1: 
		
		
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Flight booked for: Islamabad, Pakistan."<<endl;
		cout<<"Departure time: Friday, May 2, 2025, 11:00 PM PKT."<<endl;
		cout<<"Arrival time: Friday, May 2, 2025, 11:40 PM PKT."<<endl;
		cout<<"Seat no: 18"<<endl;
		cout<<"Bags allowed = 6"<<endl;
		cout<<"Weight per bag: 60kg"<<endl;
			break;
			
		case 2:
			
			
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Flight booked for: Lahore, Pakistan."<<endl;
		cout<<"Departure time: Saturday, May 3, 2025, 11:00 AM PKT."<<endl;
		cout<<"Arrival time: Saturday, May 3, 2025, 11:40 AM PKT."<<endl;
		cout<<"Seat no: 48"<<endl;
		cout<<"Bags allowed = 6"<<endl;
		cout<<"Weight per bag: 60kg"<<endl;
			break;
			
		case 3:
			
			
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Flight booked for: Istanbul, Turkiye."<<endl;
		cout<<"Departure time: Friday, May 2, 2025, 11:00 PM PKT."<<endl;
		cout<<"Arrival time: Saturday, May 3, 2025, 3:00 AM TRT."<<endl;
		cout<<"Seat no: 20"<<endl;
		cout<<"Bags allowed = 6"<<endl;
		cout<<"Weight per bag: 60kg"<<endl;
		
			break;
		case 4:
			
			
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Flight booked for: Zurich, Switzerland."<<endl;
		cout<<"Departure time:  Friday, May 2, 2025, 11:00 PM PKT"<<endl;
		cout<<"Arrival time: Saturday, May 3, 2025, 6:00 AM CEST"<<endl;
		cout<<"Seat no: 72"<<endl;
		cout<<"Bags allowed = 6"<<endl;
		cout<<"Weight per bag: 60kg"<<endl;
		break;
		
		 default:
		 	
			cout<<"SORRY! Flights to cities other than those mentioned above are not available."<<endl;
			
		
		
	}
	

	
	cout<<"------------------Luggage Checking---------------------"<<endl;
	
    cout<<"Enter the number of bags you're taking on flight: ";
    cin>>bags;
    
    cout<<"Enter the weight per bag: ";
    cin>>weight;
    
    if(bags <= 6 && weight <=60 ){
    	cout<<"You are eligible to fly."<<endl;
    
    cout<<"------------------------Security Check-------------------------"<<endl;
    	
    	
    cout << "Enter the item to check: ";
    cin >> itemtocheck;

    for (int i = 0; i < maxprohib; ++i) {
        if (itemtocheck == prohibitems[i]) {
            isprohib = true;
            break;
        }
    }
    if (isprohib) {
        cout << "Warning " << itemtocheck << " is prohibited. You cannot fly with this item." << endl;
    } else {
        cout << itemtocheck << " is allowed." << endl;
    }
	}
	
	else {
		cout<<"You cannot fly because the mentioned conditions of bags or weight are not fulfilled."<<endl;
	}
}


	return 0;
	
}
