#include <iostream>
using namespace std;
void upper_(char);
void sum1(int);
void avg1(int);
int main(){
	/*char ch;
	cout<<"Enter charater :";
	cin>>ch;
	upper_(ch);

	return(0);
}
void upper_(char ch){
	cout<<char(toupper(ch));*/
	int num,i;
	cout<<"Input number :";
	cin>>num;
	sum1(num);
	avg1(num);
	return(0);

}
void sum1(int num){
int sum=0;
	for(int i=1;i<=num;i++)
		sum+=i;
cout<<sum<<endl;
}
void avg1(int num){
	float sum=0,court=0;
	for(int i=1;i<=num;i++)
		sum+=i;
	
cout<<sum/num<<endl;

}
