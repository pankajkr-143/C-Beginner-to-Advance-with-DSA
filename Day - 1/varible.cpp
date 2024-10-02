#include <iostream>
using namespace std;

int main(){
	
	int rollno;
	string section;
	string name;
	float marks;
	bool isSafe = true;
	double price;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	
	cout<<"Enter Your Roll No. : ";
	cin>>rollno;

	cout<<"Enter Your Section : ";
	cin>>section;
	
	cout<<"Enter Your Marks : ";
	cin>>marks;	
	
	cout<<"Enter Your Price : ";
	cin>>price;	
	
	
	cout<<"You name is : "<<name<<endl;
	cout<<"You rollno is : "<<rollno<<endl;
	cout<<"You section is : "<<section<<endl;
	cout<<"You marks is : "<<marks<<endl;
	cout<<isSafe<<endl;
	cout<<"Your price is : "<<price<<endl;

	return 0;
}
