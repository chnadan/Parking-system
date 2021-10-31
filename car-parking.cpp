#include<iostream>
using namespace std;
int main()
{
	int u_input; int amount = 0,count = 0;
	int car=0,bus=0,ricksha=0;
	
	
	// menu
while(true){
	cout<<"\n\n Welcome To school vehicles Parking System!!\n"<<endl;
	cout<<"\t\tPress 1 for bikes"<<endl;
	cout<<"\t\tPress 2 for Car"<<endl;
	cout<<"\t\tPress 3 for Bus"<<endl;
	cout<<"\t\tPress 4 for Show Record"<<endl;
	cout<<"\t\tPress 5 for Delete Record"<<endl;
	
	cin>>u_input;
	 if(u_input==1)
	{
		if(count<=50){
		
		amount = amount + 100 ;
		count = count + 1;
		ricksha=ricksha+1;
	}
	else
	cout<<"No More parking!<<endl";
}
	else if(u_input==2)
	{
		if(count<=50){
		amount = amount + 200 ;
		count = count + 1;
		car = car+1;
	}
	else
	cout<<"No more parking!<<endl";
	}
	else if(u_input==3)
	{
		if(count<=50){
		amount = amount + 300 ;
		count = count + 1;
		bus=bus+1; 
		}
		else
		cout<<"No more parking !"<<endl;
	}
	else if(u_input==4)
	{
		cout<<"*************************************"<<endl;
		cout<<"The total amount = "<<amount<<endl;
		cout<<"The total number of Vehicals Parked = "<<count<<endl;
	    cout<<"The total number of Cars = "<<car<<endl;
		cout<<"The total number of Buses = "<<bus<<endl;
		cout<<"The total number of bikes's' = "<<ricksha<<endl;
			
	}
	else if(u_input==5)
	{
		cout<<"*************************************"<<endl;
		amount = 0 ;
		count = 0 ;
		car=0;
		bus=0;
		ricksha=0;
		cout<<"*************************************"<<endl;
		cout<<"Record Deleated"<<endl;
		cout<<"*************************************"<<endl;
	}
	else{
       cout<<"Invalid input!!"<<endl;
   }
}
	return 0;
}