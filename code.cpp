// #include<iostream>
// using namespace std;

// int main() {
// int age=25;
// cout<<"age is : " << age << endl;
// return 0;
// }

// // Biolarplate code



// #include <iostream>
// using namespace std;

// int main(){
//     char grade = 'B'; //65 ascii valur
    
//     int value = grade;
//     cout << value << endl;
//     return 0;

// }


//arathmetic operator
// #include <iostream>
// using namespace std;

// int main(){
//     int a= 5, b= 10;
//     int sum = a / b;

//     cout<< sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//  int a = 5;
//  float b = 10.5;
//     float sum = a + b;

//     cout<< sum << endl;
//     return 0;
// }


//Relational operator
// #include <iostream>
// using namespace std;

// int main(){
    

//     cout<< (5 > 10) << endl;
//     cout<< (5 < 10) << endl;
//     cout<< (5 >= 10) << endl;
//     cout<< (5 <= 10) << endl;
//     cout<< (5 == 10) << endl;
//     cout<< (5 != 10) << endl;
    
//     return 0;
// }


//Logical operator
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5, b = 10;
//     cout<< (a > 0 && b > 0) << endl; // true
//     cout<< (a > 0 || b < 0) << endl; // true
//     cout<< !(a > 0) << endl; // false
//     return 0;
// }
 

//sum of 2 numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int a , b;
//     cout << "enter a :" << endl;
//     cin >>a;

//     cout << "enter b :";
//     cin >> b;

//     int sum = a + b;
//     cout << "sum is : " << sum << endl;
//     return 0;
// }



//unary operator

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;

//     int b = a++; // post increment, b gets the value of a before incrementing
//     int c = ++a; // pre increment, a is incremented first and then assigned to c
//     cout<< b << endl;
//     cout << a << endl;
//     return 0;
// }



// if - else statement

// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "enter a character : " << endl;
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z'){
//         cout<< " Lower case" << endl;
//         }
//         else if (ch >='A' && ch <='Z') {
//             cout<< "Upper case" <<endl;
//         }
//         else{ 
//             cout<< "Not an alphabates" << endl;
//         }
// }



// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "enter a character : " << endl;
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z'){
//         cout<< " Lower case" << endl;
//         }
//         else {
//             cout<< "Upper case" <<endl;
//         }
// }




//ASCII value of a character

// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "enter a character : " << endl;
//     cin >> ch;

//     if (ch >= 69 && ch <= 90){
//         cout<< " Upper case" << endl;
//         }
//         else {
//             cout<< "Lower case" <<endl;
//         }
// }




// Ternary Statement

// #include <iostream>
// using namespace std;

// int main(){
//     int n =  -8;

//     cout << (n >= 0 ? "Positive" : "Negative") << endl;
//     return 0;
// }
 


// sorting algorithum

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {

//     //Array example
//     int arr[] = {5, 2, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr,arr + n);
//     cout << "Sorted array: ";
//     for (int i=0; i < n; i++) 
//         cout << arr[i] << " ";
//         cout << endl;

//     //Vector example
//     vector<int> vec = {5, 2, 9, 1, 5};
//     sort(vec.begin(), vec.end());
//     cout << "Sorted vector: ";
//     for (int i=0; i < vec.size(); i++) 
//         cout << vec[i] << " ";
//         cout << endl;    
//     }


//Loops
//while loop 

// #include <iostream>
// using namespace std;

// int main() {
//     int count = 1;
//     while (count <= 5) {
//         cout << count << endl;
//         count++;
//     }
//     return 0;
// }



// //infinite loop


// #include <iostream>
// using namespace std;

// int main() {
// int n = 50;
// int count = 1;

// while(count <= n) {
// cout << count << ""; //1.1.1.1.1.1.1.1
// // count++;
// }
// cout << endl;
// return 0;
// }



// for loop
// #include <iostream>
// using namespace std;

// int main() {
//     for(int i=1; i <= 5; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// sum of numbers from 1 to n using for loop

// #include <iostream>
// using namespace std;

// int main () {
//     int n = 50;
//     int sum = 0;

//     for(int i=1; i<=n; i++) {
//         sum += i; 
//     }
//     cout << " sum: "<< sum << endl;
//     return 0;
// }


// sum of numbers from 1 to n using while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 2;
//     int sum = 0;
//     int i = 1;
//     while(i <= n) {
//         sum += i;
//         i++;
//     }
//     cout << "sum: " << sum << endl;
//     return 0;
// }


//#include <iostream>
// using namespace std;

// int main () {
//     int n = 50;
//     int sum = 0;

//     for(int i=1; i<=n; i++) {
//         sum += i; 
//         if(i ==5)
//             break;
        
//     }
//     cout << " sum: "<< sum << endl;
//     return 0;
// }

//sum of all number from 1 to n
//even
// #include <iostream>
// using namespace std;

// int main () {
// int n =50;

// for(int i=1; i<=n; i++) {
//     if(i % 2 == 0) {         //for odd number i % 2 != 0
//         cout << i << " ";
//     }
// }
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
// int n =5;
// int oddSum = 0;

// for(int i=1; i<=n; i++) {
//     if(i % 2 == 1) {        
//         cout << i << " ";
//         oddSum += i;
//     }
// }
// cout << "Sum of odd numbers: " << oddSum << endl;
// return 0;
// }



// check if the number is prime or not

// #include <iostream>
// using namespace std;

// int main() {
//     int n=1;
//     bool isPrime = true;

//         for (int i = 2; i <= n-1; i++) {
//             if (n % i == 0) {
//                 isPrime = false; // n is divisible by a number other than 1 and itself
//                 break;
//             }
//         }

//         if(isPrime) {
//             cout << n << " is a prime number." << endl;
//         } else {
//             cout << n << " is not a prime number." << endl;
//         }
//     return 0;
// }


//nested loop (loop inside a loop)

// #include <iostream>
// using namespace std;

// int main() {
   
//    for (int i=1; i<=5; i++){
//     int n = 5;
//      for (int j=1; j<=n; j++) {
//         cout << "*";
//      }
//     cout << "*" << endl;
//    }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//        int n = 5;

//    for (int i=1; i<=5; i++){
//         cout << "*";
//      }   
//     return 0;
// }

//patterns
//square pattern
 
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i = 1; i <= n; i++){

//         for(int j = 1; j <= n; j++){
//             cout << j << " ";
//         }
//          cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i = 1; i <= n; i++){

//         for(int j = 1; j <= n; j++){
//             cout << "*" << " ";
//         }
//          cout << endl;
//     }
//     return 0;
// }

//

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 3;

//     int num = 1;

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < n; j++){
//             cout << num << " ";
//             num++;
//         }
//          cout << endl;
//     }

//     cout << "after the pattern : " << num << endl;
//     return 0;
// }      // output: 1 2 3 
//                   4 5 6
//                   7 8 9



// for ouput: A B C
//            D E F
//            G H I

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 3;

//     char ch = 'A';

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < n; j++){
//             cout << char(ch) << " ";
//             ch++;
//         }
//          cout << endl;
//     }

//     return 0;
// }  


//Triangle loop

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) {
//             cout << "* ";
//          }
//          cout << endl;
//         }
//         return 0;
//     }      //output:*
           //       * *
           //       * * *
           //       * * * *
           //       * * * * *


// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int num = 1;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) {
//             cout << num << " ";
//             num++;
//          }
//          cout << endl;
//         }
//         return 0;
//     }   //output: 1
            //       2 3
            //       4 5 6
            //       7 8 9 10
            //       11 12 13 14 15


// #include <iostream>
// using namespace std;

// int main() {
//     int n=4;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) {
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }    // output: 1
          //       2 2
          //       3 3 3
          //       4 4 4 4

//  #include <iostream>
//  using namespace std;

//  int main() {
//      int n = 4;
//      char ch = 'A';

//      for(int i=0; i<n; i++) {
//          for(int j=0; j<i+1; j++) {
//              cout << char(ch) << " ";
//          }
//          cout << endl;
//          ch++;
//      }
//      return 0;
// } // output : A
     //          B B
     //          C C C       
    //           D D D D


//   #include <iostream>
//   using namespace std;

//   int main(){
//     int n=5;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// } // output: *****
   //       *****
    //       *****
    //       *****


// #include <iostream>
// using namespace std;

// int main(){
    
//     int n = 5;

//     for(int i=0; i<n; i++) {
//         char ch = 'A';
//         for(int j=0; j<n; j++) {
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// } // output: ABCDE
   //       ABCDE
    //       ABCDE
    //       ABCDE
    //       ABCDE


    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n = 3;
    //      int num = 1;

    //     for(int i=0; i<n; i++){ 
    //         for(int j=0; j<n; j++){
    //             cout << num << " ";
    //             num++;
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // } // output: 1 2 3
   //          4 5 6
    //          7 8 9


    // #include <iostream>
    // using namespace std;

    // int main(){
    //     int n =3;
    //     char ch = 'A';

    //     for(int i=0; i<n; i++) {
    //         for(int j=0; j<n; j++) {
    //             cout << char(ch) << " ";
    //             ch++;
    //         }
    //         cout << endl;
    //     }
    // } // output: A B C
     //          D E F    
     //          G H I


// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++) {
//         for(int j=1; j<=i+1; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }        //output: 1
          //       1 2
          //       1 2 3
          //       1 2 3 4



//           #include <iostream>
//         using namespace std;

// int main(){
//     int n = 4;
//     for(int i=n-1; i>=0; i--) {
//         for(int j=0; j<i+1; j++) {
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }    // output: 4 4 4 4
          //       3 3 3
          //       2 2
          //       1



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i = 0; i < n; i++) {

//         // spaces
//         for(int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         // numbers
//         for(int j = 0; j < n - i; j++) {
//             cout << (i + 1);
//         }

//         cout << endl;
//     }

//     return 0;
// }    // output: 1111
          //        222
          //         33
          //          4


#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        // characters
        for(int j = 0; j < n - i; j++) {
            cout << char('A' + i);
        }

        cout << endl;
    }

    return 0;
}  //output : AAAA
        //     BBB
        //      CC
        //       D 

#include <iostream>
using namespace std;

int printHello(){
    cout << "hello\n";
    return 3;
}

int main(){
   int val = printHello();
   cout << "val =" << val << endl;
   
    return 0;
}
  
