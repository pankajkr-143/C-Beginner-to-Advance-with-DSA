#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"enter age : ";
	cin>>age;
	
	if(age >= 18){
		cout<<"You are eligible for vote.";
	}
	else{
		cout << "You are not eligible for vote.";
	}
	return 0;
}
