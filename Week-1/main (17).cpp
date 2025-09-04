#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    float a, s, m, d;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Choose one of the following options:\n'a' for Addition, 's' for Subtraction, 'm' for Multiplication, and 'd' for Division"; 
    
    cout << "Enter your choice: ";
    cin >> a, s, m, d;
    a = (num1 + num2);
    s = (num1 - num2);
    m = (num1 * num2);
    d = (num1 / num2);
    
    if (a){
        cout << "Your Addition of "<< num1 << " and " << num2 << " is: "<< a;
    }
    else{
        cout << "Your Division of "<< num1 << " and " << num2 << " is: "<< d;
    }
    
    
    
    
    return 0;