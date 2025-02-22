# tejaswicodesoft
codesoft
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  srand(timr(0));
  int randomNumber=rand()%100+1;
  int userGuess;
  int attempts=0;
  cout<<"welcome to guessing game"<<endl;
	cout<<I have generated a random number between 1 and 100.can you guess it?"<<endl;
 do
 {
 		cout<<"Enter your guess:";
		cin>>userGuess;
		attempts++;
	if(userGuess>randomNumber)
 		{
 			cout<<"too high....Try again"<<endl;
		}
	else if(userGuess<randomNumber){
 				cout<<"too low...Try again"<<"in"<<attempts<<"attempts"<<endl;
		 }
	 }
	while(userGuess!=randomNumber);
 return 0;
 }
 
 				
	
 
