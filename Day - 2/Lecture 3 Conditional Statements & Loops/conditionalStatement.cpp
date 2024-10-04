#include <iostream>
using namespace std;

int main(){
//	int n = -35;
//	
//	if (n>=0){
//		cout<<"N is Positive"<<endl;
//	}
//	else{
//		cout<<"N is Negative"<<endl;
//	}

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
