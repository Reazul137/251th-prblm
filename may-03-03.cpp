#include<iostream>
using namespace std;
int main()
{
    int age, weight;

    cout << "Enter your age in years and weight in lbs with a space in between :  ";
    cin >> age >> weight ;

    cout << "Your age in days is : "<< age * 365 << " days ."<< endl;
    cout << "Your weight in ounce is : " << weight * 16 << " ounces.";

    cout << endl;

    return 0;



}
