#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	/*float r =3.14*2.5*2.5;
	float a =5.63*54;
	
	cout<<fixed<<setprecision(4)<<r<<setw(20)<<setfill('-')<<a<<endl;
	cout<<fixed<<setprecision(2)<<a<<endl;*/



	/*int age,salary,commision;
	string name;
	cout<<"Input name: ";
	cin>>name;
	cout<<"Input age : ";
	cin>>age;
	cout<<"Input salary : ";
	cin>>salary;
	cout<<"Input commision :";
	cin>>commision;

	cout<<setw(35)<<setfill('-')<<"-"<<endl;
	cout<<"name"<<setw(10)<<setfill(' ')<<"age"<<setw(10)<<setfill(' ')<<"salary"<<setw(10)<<setfill(' ')<<"commision"<<endl;
	cout<<setw(35)<<setfill('-')<<"-"<<endl;
	cout<<name<<setw(10)<<setfill(' ')<<age<<setw(10)<<setfill(' ')<<salary<<setw(10)<<setfill(' ')<<commision<<endl;
	cout<<setw(35)<<setfill('-')<<"-"<<endl;*/





	/*string s1="Lisa";
	string s2="Black pink";
	cout<<s1.length()<<endl; //4
	cout<<s2.size()<<endl; //10
	cout<<s2.c_str()<<endl; // Black pink
	cout<<s2.at(4)<<endl; // k
	cout<<s2.append("2020")<<endl; //Black pink2020
	cout<<s2.substr(6,8)<<endl;*/


	string num="";
	cout<<"Enter number :";
	cin>>num;
	for( int i =0;i<=num.size()-1;i++){
		cout<<num.at(i);
		switch (num.at(i)){
		case '0' :cout<<"zero"<<endl;
				break;
		case '1' :cout<<"one"<<endl;
				break;
		case '2' :cout<<"two"<<endl;
				break;
		case '3' :cout<<"three"<<endl;
				break;
		case '4' :cout<<"four"<<endl;
				break;
		case '5' :cout<<"five"<<endl;	
				break;
		case '6' :cout<<"six"<<endl;
				break;
		case '7' :cout<<"seven"<<endl;
				break;
		case '8' :cout<<"eight"<<endl;
				break;
		case '9' :cout<<"nine"<<endl;
				break;
		default : cout<<"not number"<<endl;
	
	
	}
	}

	return(0);
}