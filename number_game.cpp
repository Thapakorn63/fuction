#include <iostream>
#include <time.h>
using namespace std;
int Guess(int);
int main(){
	int num,Round,count=0;
	srand(time(NULL));
	Round=1+rand()%10;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	count=Guess(Round);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<Round<<endl;
	cout<<"You made "<<count<<" guesses"<<endl;
	


	return(0);
}
int Guess( int Round)
{ int count=0,num;
do{
	cout<<"Guess the number (1 to 10):";
	cin>>num;
	
	if(num>Round)
		cout<<"The secret number is lower"<<endl;
	if(num<Round)
		cout<<"The secret number is highe"<<endl;;
      count++;
}
while(num!=Round);
	return(count);
}