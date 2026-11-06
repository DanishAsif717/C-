#include <iostream>
using namespace std;

//	cout << "Test Lab 5";
//    cout << "Single Quote: \'" << endl;
//    cout << "Double Quote: \"" << endl;
//    cout << "Question Mark: \?" << endl;



//    int firstInput;
//    int secondInput;
//    
//    cout <<"Input first Value";
//    cin >> firstInput;
//    cout <<"Input Second Value";
//    cin >> secondInput;    
//    
//    int sumNumber = firstInput + secondInput ;
//    int difference = firstInput - secondInput;
//    int product = firstInput * secondInput;
//    float quotient = (float)firstInput / secondInput;
//    
//    cout << "Show your Quotient Value: " << quotient << endl;
//    cout << "Show your Product Value: " << product << endl;
//    cout << "Show your Difference Value: " << difference << endl;
//    cout << "Show your Sum Value: " << sumNumber;

//int main()
//{
//    float radius;
//    float pi = 3.14159;
//
//    cout << "Enter Circle Radius: ";
//    cin >> radius;
//
//    float area = pi * radius * radius;
//    float circumference = 2 * pi * radius;
//    float diameter = 2 * radius;
//
//    cout << "Area: " << area << endl;
//    cout << "Circumference: " << circumference << endl;
//    cout << "Diameter: " << diameter << endl;
//
//    return 0;
//}

int main()
{
   int firstValue;
   int secondValue;
   int temp;
   
   cout << "Swap Value";
   cout << "Enter Swap value First value";
   cin >> firstValue;
   cout << "Enter Swap value First value";
   cin >> secondValue;
   
   cout << "Before Swap: " << endl;
   cout << "First Value: " << firstValue << endl;
   cout << "Second Value: " << secondValue << endl;
   
   temp = firstValue;
   firstValue = secondValue;
   secondValue = temp;   
   
   cout << "After Swap: " << endl;
   cout << "First Value: " << firstValue << endl;
   cout << "Second Value: " << secondValue << endl;      
   return 0;
}