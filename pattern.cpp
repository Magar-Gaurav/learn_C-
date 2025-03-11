// #include<iostream>
// using namespace std;
// int main () {
//     char ch = 'A';
//     int n = 3;

//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     char  ch = 'A';
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int  j = 0; j < i + 1; j++){
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n = 4;

//     for(int i = 0; i < n; i++){
//         int c = 1;
//         for(int j = 0; j < i+1; j++){
//             cout << c << " ";
//             c++;
//         }
//         cout << endl;
//     }
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n = 4;

//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j > 0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     for(int i = 0; i < n; i++){
//     char  ch = 'A' + i;
//         for(int  j = i+1; j > 0; j--){
//             cout << ch-- << " "; 
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n = 4;
//     char ch = 'A';

//     for(int i = 0; i < n; i++){
//         //for printing spaces
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }
//         //for printing characters
//         for(int k = 0; k < n - i; k++){
//             cout << ch;
//         }
//         ch++;
//         cout <<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int n = 4;

//     for(int i = 0; i < n; i++){
//         //for printing spaces
//         for(int j = 0; j < n - i - 1; j++){
//             cout << " ";
//         }
//         //printing the left side of pattern
//         for(int k = 1; k <= i + 1; k++){
//             cout << k;
//         }

//         //printing the right side of the pattern
//         for(int l = i; l > 0 ; l--){
//             cout << l;
//         }
//         cout << endl;
//     }
//  return 0;
// }

#include<iostream>
using namespace std;
int main () {
    int n = 4;
    for(int i = 0; i < n; i++){
        //for printing spaces before the number
        for(int j = 0; j  < n - i - 1; j++){
            cout << " ";
        }
        //printing the numbers
        
            cout << "*";
        

        if( i != 0){
            for(int l = 0; l < 2*i-1; l++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n-1 ; i++){
        //for printing spa ces before the number
        for(int j = 0; j  < i + 1; j++){
            cout << " ";
        }
        //printing the numbers
        
            cout << "*";
        

        if( i !=  n-2){
            for(int l = 0; l < 2 *(n-i)-5; l++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
 return 0;
}