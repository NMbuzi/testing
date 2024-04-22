#include<iostream>
using namespace std;
int main()
{
    int number1=5;
    int number2=10;
    int intenger;
      cout<<"enter intenger between 5and 10\n";
        cin>>intenger;

    
    while (intenger!=5<=10)
    {
        cout<<"invalide intenger\n";
        cin>>intenger;
    }
    if (intenger>=number1 && intenger<=number2)
    {
        cout<<"valide number";
    }
    
    return 0;
} 