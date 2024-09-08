#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;//generates a random no. between 1 and 100
    //keep running the loop until the no. is 67guessed 
do{
   cout<<"Guess the number between 1 to 100 \n";
   cin>>guess;
   if(guess>number){
    cout<<"Lower number please!! \n";
   }
    else if(guess<number){
        cout<<"Higher number please!! \n";
 }
 else{
    cout<<"You guessed it in "<<nguesses<<"attempts.\n";
 }
 nguesses++;
}while(guess!=number);
    return 0;
}