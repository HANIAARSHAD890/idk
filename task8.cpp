#include<iostream>
using namespace std;
main(){
	cout<<"Enter vegetable price per kilogram (in coins): ";
        float vegetable;
	cin >> vegetable;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruit;
	cin>> fruit;
	cout<<"Enter total kilograms of vegetables: ";
	float kgofveg;
	cin>> kgofveg;
	cout<<"Enter total kilograms of fruits: ";
	float kgoffruits;
	cin>>kgoffruits;	
	float totalrupeesincoins;
	totalrupeesincoins=(vegetable*kgofveg) +(fruit*kgoffruits);
	float totalrupeesinRP;
	totalrupeesinRP=totalrupeesincoins * (1/1.94);
	cout<<"Total earnings in Rupees (Rps): ";
	cout<<totalrupeesinRP<<endl;
	
	
}
	
	 
	
        
       
