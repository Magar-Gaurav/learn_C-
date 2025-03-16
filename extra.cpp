#include<iostream>
using namespace std;
int main () {
    char option;

    cout << "Question number 1: \n";
    cout << "Who is the founder of computer science ?\n";
    cout << "a. Charles Babbage \t";
    cout << "b. Lady August Lovelace \n";
    cout << "c. John Vonn-Neumann \t";
    cout << "d. John Harvard" << endl;

    cout << "Enter the option among a, b , c and d : " << endl; 
    cin >> option;

    if(option  == 'a'  || option  == 'A'){
        cout << "Correct Answer You got 1 marks for this" << endl;
    }else if (option  != 'b' || option  != 'B' || option  != 'c' || option  != 'C' || option  != 'd' || option  != 'D'  ){
        cout << "Your option "<< option << " is not a correct option." << endl;
        cout << "Please enter the correct option." << endl;
    }
    else {
        cout << "Wrong Answer You need to study further more!!!" << endl;
    }
 return 0;
}