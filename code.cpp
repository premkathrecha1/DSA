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


// #include <iostream>
// using namespace std;

// int main() {

//     int n = 4;

//     for(int i = 0; i < n; i++) {

//         // spaces
//         for(int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         // characters
//         for(int j = 0; j < n - i; j++) {
//             cout << char('A' + i);
//         }

//         cout << endl;
//     }

//     return 0;
// }  //output : AAAA
        //     BBB
        //      CC
        //       D 
  




//function

// #include <iostream>
// using namespace std;

// void printHello(){
//     cout << "hello\n";
// }

// int main(){
//     printHello();
//     printHello();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int printHello(){
//     cout << "hello\n";
//     return 3;
// }

// int main(){
//    int val = printHello();
//    cout << "val =" << val << endl;
   
//     return 0;
// }
//output: hello
//        val = 3



// #include <iostream>
// using namespace std;

// int sumN(int n) {
//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }
// return sum;
// }

// int main(){
//     cout << sumN(5) << endl; // output: 15
//     cout << sumN(10) << endl; // output: 55

//     return 0;
// }

//calculate N factorial



// #include <iostream>
// using namespace std;

// int sumN(int n) {
//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }
// return sum;
// }

// int factorialN(int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     cout << factorialN(5) << endl; // output: 120
//     cout << sumN(10) << endl; // output: 55

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//      int fact_n = factorial(n);
//         int fact_r = factorial(r);
//         int fact_nmr = factorial(n-r);

//         return fact_n / (fact_r * fact_nmr);
// }

// int main() {
//     int n=8, r=2;

//     cout << nCr(n,r) << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }

//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// // Function to print all prime numbers from 1 to N
// void printPrimes(int N) {
//     cout << "Prime numbers from 1 to " << N << " are:\n";

//     for (int i = 2; i <= N; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
// }

// // Function to print nth Fibonacci number
// void printNthFibonacci(int n) {
//     int a = 0, b = 1, c;

//     if (n == 1) {
//         cout << "Nth Fibonacci number is: " << a << endl;
//         return;
//     }

//     if (n == 2) {
//         cout << "Nth Fibonacci number is: " << b << endl;
//         return;
//     }

//     for (int i = 3; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     cout << "Nth Fibonacci number is: " << b << endl;
// }

// int main() {
//     int num, N, fibN;

//     // Check prime number
//     cout << "Enter a number to check prime: ";
//     cin >> num;

//     if (isPrime(num)) {
//         cout << num << " is a Prime number.\n";
//     } else {
//         cout << num << " is NOT a Prime number.\n";
//     }

//     cout << endl;

//     // Print primes from 1 to N
//     cout << "Enter value of N: ";
//     cin >> N;

//     printPrimes(N);

//     cout << endl;

//     // Print nth Fibonacci number
//     cout << "Enter position for Fibonacci number: ";
//     cin >> fibN;

//     printNthFibonacci(fibN);

//     return 0;
// }



//CH: 6 
// Binary Number System

// #include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while(decNum > 0) {
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += rem * pow;
//         pow *= 10;
//     }
//     return ans; // binary form
// }

// int main() {
//     int decNum = 50;
//     cout << decToBinary(decNum) << endl;

//     return 0;
// }


//ch 7 

//bitwise operator

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5; // 0101 in binary
//     int b = 3; // 0011 in binary

//     cout << (a ^ b) << endl; // bitwise AND
   

//     return 0;
// }


//data type modifier

// #include <iostream>
// using namespace std;

// int main(){

//     cout << sizeof(int) << endl;
//     cout << sizeof(short) << endl;
//     cout << sizeof(long) << endl;
//     cout << sizeof(long long) << endl;
// return 0;
// }


//array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for(int i=0; i<5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// //FIND SMALLEST NUMBER IN AN ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int smallest = INT16_MAX;
//     for(int i=0; i<size; i++) {
//         if(nums[i] <smallest) {
//             smallest = nums[i];
//         }
//     }

//     cout << "Smallest number is: " << smallest << endl;
//     return 0;
// }


//FIND SMALLEST & LARGEST NUMBER IN AN ARRAY
#include <iostream>
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for(int i=0; i<size; i++) {
       smallest = min(smallest, nums[i]);
       largest = max(largest, nums[i]);
        }
    

    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
    return 0;
}
