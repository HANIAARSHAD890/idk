#include<iostream>
using namespace std;
main(){
	cout<< "Number of Minutes: ";
        int minutes;
	cin >> minutes;
	cout<< "Frames per Second: ";
	int frames;
	cin>> frames;
	int seconds;
	seconds=60*minutes;
	int totalframes;
	totalframes=seconds*frames;
	cout << "Total Number of Frames: ";
        cout<< totalframes;
	
        
       
 }