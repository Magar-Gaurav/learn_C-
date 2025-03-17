// basic function

// #include<iostream>
// using namespace std;

// //defining a new function
// int helloprint () {
//     cout << "Hello World" << endl;
//     return 4;
// }

// int main () {
//     //calling or invoke the previous function to perform task
//     //without calling the function task cannot be performed
//     helloprint();

//     cout << helloprint() << endl;//for this type of function calling there must be return type
//     //task of the main function
//     int a = 10;
//     int b = 10;
//     int sum = a + b;

//     if(sum == 20){
//         cout << "Hello User" << endl;
//     }

//     return 0;
// }

// //function with parameters

// #include<iostream>
// using namespace std;

// int sum(int a, int b) {
//     int s = a + b;
//     return s;
// }
// int min(int a, int b){
//     if(a > b){
//         return b;
//     } else if (b > a){
//         return a;
//     } else {
//         cout << "Both numbers are equal" << endl;
//     }
// }
// int main() {
//     // int a = 10;
//     // int b = 5;

//     // cout << sum(a,b) << endl;

//     cout << sum (10, 5) << endl;
//     cout << min(5, 5) << endl;
//     return 0;
// }

// //calculating sum of numbers from 1 to N

// #include<iostream>
// using namespace std;

// int sums(int n){
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//         sum +=i;
//     }
//     return sum;
// }
// int main () {
//     int n;
//     cout << "Enter the value of n: \n";
//     cin >> n;

//     cout << sums(n);

//     return 0;
// }

// //calculate the factorial

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int facto = 1;
//     for(int i = 2; i <= n; i++){
//         facto *= i;
//     }
//     return facto;
// }

// int main () {
//     int n;
//     cout << "Enter the value of n:\n";
//     cin >> n;

//     cout << fact(n);
// }

// //calculate sum of digit of a number

// #include<iostream>
// using namespace std;
// int sumDig(int n){
//     int x = 0, y = 0;

//     while(n != 0){
//         x = n % 10;
//         y += x;
//         n = n / 10;
//     }
//     return y;
// }
// int main () {
//     int n;
//     cout << "Enter the value of n:\n";
//     cin >> n;

//     cout << sumDig(n) << endl;
//     return 0;
// }

// //calculate nCr binomial coffiecient of n and r
// // => formula ==  n!/(r!  * (n-r)!)

// #include<iostream>
// using namespace std;
// int factOfn(int n){
//     int x = 1;
//     for(int i = 2; i <= n; i++){
//         x *= i;
//     }
//     return x;
// }
// int factOfr(int r){
//     int y = 1;
//     for(int i = 2; i <= r; i++){
//         y *= i;
//     }
//     return y;
// }
// int factOfnr(int n, int r){
//     int z = 1;
//     for(int i =1; i <= (n-r); i++){
//         z *= i;
//     }
//     return z;
// }
// int main () {
//     int n, r;
//     cout << "Enter the value of n:\n";
//     cin >> n;
//     cout << "Enter the value of r:\n";
//     cin >> r;

//     int a = factOfn(n);
//     int b = factOfr(r);
//     int c = factOfnr(n, r);

//     int formu =  (a) / (b * c);

//     cout << formu << endl;

//     return 0;
// }

// // check if  a number is prime or not
// #include <iostream>
// using namespace std;

// int checkPrime(int n)
// {
//     int k = 0;
//     if (n <= 1)
//     {
//         cout << "not a prime number" << endl;
//     }
//     else
//     {
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 k++;
//             }
//         }
//     }
//     return k;
// }

// int main()
// {
//     int n, k;
//     cout << "Enter the value of n:\n";
//     cin >> n;

//     k = checkPrime(n);
//     if (k <= 2)
//     {
//         cout << "Prime number" << endl;
//     }
//     else
//     {
//         cout << "Not a prime number" << endl;
//     }
//     return 0;
// }

// // print all the prime numbers from 1 to N

// #include <iostream>
// using namespace std;
// void checkPrime(int n)
// {
//     if (n <= 1)
//     {
//         cout << "Not a prime number." << endl;
//         return;
//     }
//     for(int i = 2; i <= n; i++){
//      bool count = true;
//         for(int j = 2 ; j * j <= i; j++){
//             if(i % j == 0){
//                 count = false;
//                 break;
//             }
//         }
//         if(count == true){
//             cout << i << " ";
//         }
//     }
//     cout << endl;
   
// }
// int main()
// {
//     int n, l;
//     cout << "Enter the value of n:\n";
//     cin >> n;

//     cout << "prime number upto" << n << endl;

//     checkPrime(n);
//  return 0;
// }


//print nth fibonacci

#include<iostream>
using namespace std;
void printFibon(int n){
    int a = 0 , b = 1, c = 0;

    for(int i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
        cout << a << " ";
    }
    cout << endl;
}
int main (){
    int n; 
    cout << "Enter the value of n:\n";
    cin >> n;

    cout << "Fibonacci series up to " << n << " is" << endl;
    printFibon(n);
 return 0;
}