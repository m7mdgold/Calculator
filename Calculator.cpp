#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib> 
#include <thread> 
#include <chrono> 
#include <cmath>
#include <sstream>

using namespace std;
using namespace std::chrono;
int choice;
float a ,result ,b;


void nbrsele(float& a, float& b) {
    string temp;
    cout << "Enter your first number: ";
    while (true) {
        getline(cin, temp);
        stringstream ss(temp);
        if (ss >> a && ss.eof()) break;
        cout << "Invalid input. Try again: ";
    }

    cout << "Enter your second number: ";
    while (true) {
        getline(cin, temp);
        stringstream ss(temp);
        if (ss >> b && ss.eof()) break;
        cout << "Invalid input. Try again: ";
    }

    
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


    float pwr() {
        int exp;
        cout << "Enter the exponent: ";
        cin >> exp;
        result = pow(a, exp);
        return result;
    }




int main() {

cout << R"(

$$$$$$\            $$\                     $$\            $$\                         
$$  __$$\           $$ |                    $$ |           $$ |                        
$$ /  \__| $$$$$$\  $$ | $$$$$$$\ $$\   $$\ $$ | $$$$$$\ $$$$$$\    $$$$$$\   $$$$$$\  
$$ |       \____$$\ $$ |$$  _____|$$ |  $$ |$$ | \____$$\\_$$  _|  $$  __$$\ $$  __$$\ 
$$ |       $$$$$$$ |$$ |$$ /      $$ |  $$ |$$ | $$$$$$$ | $$ |    $$ /  $$ |$$ |  \__|
$$ |  $$\ $$  __$$ |$$ |$$ |      $$ |  $$ |$$ |$$  __$$ | $$ |$$\ $$ |  $$ |$$ |      
\$$$$$$  |\$$$$$$$ |$$ |\$$$$$$$\ \$$$$$$  |$$ |\$$$$$$$ | \$$$$  |\$$$$$$  |$$ |      
 \______/  \_______|\__| \_______| \______/ \__| \_______|  \____/  \______/ \__|      
                                                                                       
                                                                                       
)" << endl;
cout << " select operation \n 1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Power 6.exit" << endl;

for (int i = 0; i < 1;) {
    
cin >> choice;
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
switch (choice) {
case 1:
nbrsele(a, b);
add();
cout << "The result is " << result << endl;
break;


case 2:
    nbrsele(a, b);
    sub();
    cout << "The result is " << result << endl;
    break;
case 3:
    nbrsele(a, b);
    mult();
    cout << "The result is " << result << endl;
    break;
case 4:
    nbrsele(a, b);
    div();
    cout << "The result is " << result << endl;
    break;
case 5:
    cout << "select number for power operation:";
    cin >> a;
    pwr();
    cout << "The result is " << result << endl;
    break;

case 6:
    exit(0);
    break;


default:
    cout << "Invalid choice!" << endl;
}
return 0;

}


}