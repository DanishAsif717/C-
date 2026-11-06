#include <iostream>
using namespace std;

int main()
{
//	cout << "Test Lab 5";
//    cout << "Single Quote: \'" << endl;
//    cout << "Double Quote: \"" << endl;
//    cout << "Question Mark: \?" << endl;


    int firstInput;
    int secondInput;
    
    cout <<"Input first Value";
    cin >> firstInput;
    cout <<"Input Second Value";
    cin >> secondInput;    
    
    int sumNumber = firstInput + secondInput ;
    int difference = firstInput - secondInput;
    int product = firstInput * secondInput;
    float quotient = (float)firstInput / secondInput;
    
    cout << "Show your Quotient Value: " << quotient << endl;
    cout << "Show your Product Value: " << product << endl;
    cout << "Show your Difference Value: " << difference << endl;
    cout << "Show your Sum Value: " << sumNumber;
    return 0;
}