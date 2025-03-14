#include<iostream>
using namespace std;
int main (){
    int a,b;
    //inputing two numbers a and b
    cout<<"Enter the value of a:\n";
    cin>>a;
    
    cout<<"Enter the value of b:\n";
    cin>>b;

    int sum = a+b;
    int difference = a - b;
    int product = a * b;

    //printing the sum difference division modular division and product
    cout<<"Sum is "<<sum<<"\n";
    cout<<"Difference is "<<difference<<"\n";
    cout<<"Product is "<<product<<endl;
    //checking if second element is 0 which will be error for division
    if(b!= 0){
        float division = (float)a / b;
        int modulo = a % b;
     cout<<"Division is "<<division<<"\n";
     cout<<"Modulo division is "<<modulo<<"\n";
    } 
    else{
        cout<<"Division cannot be performed due to second element is 0"<<endl;
    }
 return 0;
}