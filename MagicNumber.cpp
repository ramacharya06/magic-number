#include<iostream>
#include<time.h>
using namespace std;

int main()

{
    srand(time(0));
    int num,random;
    cout << "Enter a number :-"; 
    cin >> num;
    random = rand();
    random = random%10;
    if (random==num)
    {
        cout << "WOWOOOOOOO YOU WINNNNNNNNN !!!!!!!!!!!!!!!!!!!!!!!!!!!! \n number was "<<random ;
    }
    else
    {
        cout << random << endl << "Let's try again";
    }
    return 0;


}