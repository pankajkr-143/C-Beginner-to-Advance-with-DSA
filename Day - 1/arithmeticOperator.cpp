#include <iostream>
using namespace std;

int main(){
	int a, b, sum, sub, mul, div, modulus;
	
	cout<<"Enter First Value : ";
	cin>>a;
	cout<<"Enter Second Value : ";
	cin>>b;
	
	//Addition
	sum = a + b;
	cout<<"Sub is : "<<sum<<endl;
	
	//Substraction
	sub = a - b;
	cout<<"Subsract is : "<<sub<<endl;
	 
	//Multiple
	mul = a * b;
	cout<<"Multiple is : "<<mul<<endl;
	
	//Division
	div = a / b;
	cout<<"Division is : "<<div<<endl;
	
	//Modulus
	modulus = a % b;
	cout<<"Modulus is : "<<modulus<<endl;
	
	return 0;
}
