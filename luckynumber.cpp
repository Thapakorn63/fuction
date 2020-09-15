#include <iostream>
#include <time.h>
using namespace std;
int main(){
	int num,ra,n = 1;
	srand(time(NULL));
	ra=1+rand()%20;
	do{
		cout<<"enter luckynumber "<< n << "(1-20) :";
		cin>>num;
		
		if(num!=ra)
			cout<<"this is wrong number"<<endl;
		n++;
	}	
	while(num!=ra);
	  cout<<"Lucky!!!"<<endl;
	  cout<<"You got 1000000 bath"<<endl;

	return(0);
}