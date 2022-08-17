#include<iostream>
using namespace std;
void display(){
	  cout<<"Press 1 : CAR"<<endl;
    cout<<"Press 2 : BIKE"<<endl;
    cout<<"Press 3 : JEEP"<<endl;
    cout<<"Press 4 : SHOW THE RECORD"<<endl;
    cout<<"Press 5 : DELETE THE RECORD"<<endl;
}
int main (){
	cout<<"    WELCOME    "<<endl;
    int choice;
    display();
    cin>>choice;
    int count = 0 ;
    int amount = 0 ;
    int car = 0 ;
    int bike = 0 ; 
    int jeep = 0 ;
	while(count<=50){
          if(choice==1){
              amount = amount + 40;
              car = car + 1;
              count++;
          }
          else if(choice==2){
          	amount  = amount + 30;
          	bike = bike + 1;
          	count++;
          } 
          else if(choice==3){
          	amount  = amount + 50;
          	jeep = jeep + 1;
          	count++;
          }   
          else if(choice==4){
          	cout<<"Number Of Cars Parked : "<<car<<endl;
          	cout<<"Number Of Bikes Parked : "<<bike<<endl;
          	cout<<"Number Of Jeeps Parked : "<<jeep<<endl;
          	cout<<"Total Number Of Vehicles Parked : "<<count<<endl;
            cout<<"Total amount earned : "<<amount<<endl; 
          }
          else if(choice==5){
          	bike = 0 ;
          	car = 0 ;
          	jeep = 0 ;
          	count = 0 ;
          	amount = 0 ;
          	cout<<"RECORD DELETED"<<endl;
          }
          else {
          	cout<<"Invalid Number "<<endl;
          }
          display();
          cin>>choice;
	}
	if(count>50){
		cout<<"Parking Is Full"<<endl;
	}

}