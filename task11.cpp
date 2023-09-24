#include<iostream>
using namespace std;
main(){
	int age;
	int moved;
	int moveadd;
	int result;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>moved;
	moveadd=moved+1;
	result=age/moveadd;
	cout<<"Average number of years lived in the same house: ";
	cout<<result;

}
