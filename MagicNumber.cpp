#include<iostream>
#include<time.h>
using namespace std;

int main()

{
    srand(time(0));
    int num,random;
    cin >> num;
    random = rand();
    if (random==num)
    {
        cout << "WOWOOOOOOO YOU WINNNNNNNNN !!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    }
    else
    {
        cout << random << endl << "Let's try again";
    }
    return 0;


}