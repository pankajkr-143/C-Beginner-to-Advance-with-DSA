#include <iostream>
using namespace std;

int main(){
	char grade = 'b'; //98
	
	int value = grade;
	cout<<value<<endl;

	double price;
	cout<<"Enter Your Price : ";
	cin>>price;
	
	int newPrice = (int)price;
	cout<<"The Final Price is : "<<newPrice<<endl;
	
	return 0;
}
