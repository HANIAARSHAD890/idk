#include<iostream>
using namespace std;
main(){
	int paintedsqmeters;
	int width;
	int length;
	int area;
	int result;
	cout<<"Number of square meters you can paint: ";
	cin>>paintedsqmeters;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	cin>>length;
	area=length *width;
	result=paintedsqmeters/area;
	cout<<"Number of walls you can paint: ";
	cout<<result;

}