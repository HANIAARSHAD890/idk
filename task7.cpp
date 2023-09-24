#include<iostream>
using namespace std;
main(){
	cout<<"Enter the movie name: ";
        string name;
	cin >> name;
	cout<<"Enter the adult ticket price: $";
	float ticketprice1;
	cin>> ticketprice1;
	cout<<"Enter the child ticket price: $";
	float ticketprice2;
	cin>> ticketprice2;
	cout<<"Enter the number of adult tickets sold: ";
	float adulttickets;
	cin>>adulttickets;	
	cout<<"Enter the number of child tickets sold: ";
	float childtickets;
	cin>> childtickets;
	float totalsallary;
	totalsallary=(ticketprice1*adulttickets) + (ticketprice2*childtickets);	
        cout<<"Enter the percentage of the amount to be donated to charity: ";
	float charity;
	cin>> charity;
	float donation;
	donation=totalsallary/charity;
	float remaining;
	remaining=totalsallary-donation;
	cout<<endl;
	cout<<"Movie: ";
	cout<<name<<endl;
	cout<<"Total amount generated from ticket sales: $";
	cout<<totalsallary<<endl;
	cout<<"Donation to charity ("<<charity<<"%): $";
	cout<<donation<<endl;
	cout<<"Remaining amount after donation: $";
	cout<<remaining<<endl;
	
}
	
	 
	
        
       
