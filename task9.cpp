#include<iostream>
using namespace std;
main(){
	int number;
	int remaindera;
	int quotienta;
	int remainderb;
	int quotientb;
	int remainderc;
	int quotientc;
	int result;
	cout<<"Enter a 4-digit number: ";
	cin>>number;
	remaindera=number%10;
	quotienta=number/10;
	remainderb=quotienta%10;
	quotientb=quotienta/10;
	remainderc=quotientb%10;
	quotientc=quotientb/10;
	result=quotientc + remainderc+remaindera+remainderb;
	cout<<"Sum of the individual digits: ";
	cout<<result;

	
	

}
	