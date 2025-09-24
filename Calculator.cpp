#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib> 
#include <thread> 
#include <chrono> 

using namespace std;
using namespace std::chrono;
int choice;
float a;
float b;
float result;


void history(){




}

int nbrsele(){

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    return a, b;
}

float add(){
result = a + b;
return result;
 }

float sub(){
    result = a - b;
    return result  ;

}

float mult() {
    result = a * b;
    return result;
}

float div() {

    if (b == 0|| a == 0) {
        cout << "Error! Division by zero." << endl;
        cout << "Please enter a non-zero number: ";
        if (b == 0) 
            cin >> b;
        if (a == 0)
            cin >> a;

            if (b == 0 || a == 0){
            cout << " funny huh?" << endl;
            this_thread::sleep_for(seconds(2));
            exit(0);}

           else{
            result = a / b;}}
        

    else {
  
        result = a / b;}
  
    return result;}




int main() {
cout << " select operation - 1.Addition 2.Subtraction 3.Multiplication 4.Division 5.History" << endl;
cin >> choice;
switch (choice) {
case 1:
nbrsele();
add();
cout << "The result is " << result << endl;
break;


case 2:
    nbrsele();
    sub();
    cout << "The result is " << result << endl;
    break;
case 3:
    nbrsele();
    mult();
    cout << "The result is " << result << endl;
    break;
case 4:
    nbrsele();
    div();
    cout << "The result is " << result << endl;
    break;
// case 5:
//     pwr();
//     break;
default:
    cout << "Invalid choice!" << endl;
}
return 0;




}