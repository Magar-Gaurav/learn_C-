// #include<iostream>
// using namespace std;

// int dectoBin(int num){
//     int pow = 1, ans = 0;
//     while(num > 0){
//         int rem = num % 2;
//         num = num / 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }

//     return ans;
// }

// int main (){
//     int num;
//     cout << "Enter the number: " << endl;
//     cin >> num;

//     cout << "Decimal value you have provided is "<< num << endl;
//     cout <<"Binary value of the number you have provided is " << dectoBin(num) << endl;

//     return 0;
// }

//conversion of 1100101 into decimal form
#include<iostream>
#include<cmath>
using namespace std;

int bintoDec(int num){
    int ans = 0, po = 0;
    while(num >= 1){
        int rem = num % 10;
        num = num / 10;

        ans += rem * pow(2,po);
        po++;
    }
    return ans;
}
int main (){
    int num = 1100101;

    cout << bintoDec(num) << endl;
 return 0;
}