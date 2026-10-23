#include<iostream>
using namespace std;
int main(){
    double m,h;
    cin >> m >> h;
    double bmi = m/h/h;
    if(bmi < 24){
        cout << "Normal";
        if(bmi<18.5)
            cout << "Underweight";
    }else{
        cout << bmi << endl << "Overweight";
    }
    return 0;
}