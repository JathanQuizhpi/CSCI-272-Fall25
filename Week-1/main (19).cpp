#include <iostream>
using namespace std;




int multiple(int x){
    
    int sum = 2 * x;
    
    return sum;
}


int multiple(int x,int y){
    
    int sum = x * y;
    return  sum;
}

int multiple (int x, int y, int z){
    
    int sum = x * y * z;
    
    return  sum;
}


int main(){
    
    int x, y, z;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;
    
    cout << "Enter the value of z: ";
    cin >> z;
    
    cout << "multiple with 1 parameter: " << multiple(x) << endl;
    
    cout << "multiple with 2 parameter: " << multiple(x, y) << endl;
    
    cout << "multiple with 3 parameter: " << multiple(x, y, z) << endl;
    
    return 0;
}