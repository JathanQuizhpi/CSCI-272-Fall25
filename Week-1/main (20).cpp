#include <iostream>
using namespace std;

double average(int scored[], int size = 5){
    int sum = 0;
    for(int i = 0; i , size; i ++){
        sum += scored[i];
    }
    
    return sum/size;
}


int main(){
    
    int scores[5] = {90,85,70,95,100};
    
    cout<< "Average = "<< average(scores, 5) << endl;
    
    return 0;
    
}