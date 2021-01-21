//Jeffrey Hunt
//1-7-21
//This is all my own work with
// I have used stack overflow for program 4, program 5

#include <iostream>
#include <vector>
#include <fstream>
#include  <string>
using namespace std;

void program1();
void program2();
void program3();
void program4();
void program5();
void program6();
void program7();
void findFileProgram7();

int main() {

//    program1();
//    program2();
//    program3();
//    program4();
//    program5();
    program6();
//    program7();
    return 0;
}

void program1() {

    // declare variables
    int a, b, c, d, e;

    cout << "Enter 5 integers: "<< endl;
    cin >> a >> b >> c >> d >> e;

    int largest = a; int smallest = a;

    //Find Largest
    if(b > largest) {
        largest = b;
    }
    if(c > largest) {
        largest = c;
    }
    if(d > largest) {
        largest = d;
    }

    if(e > largest) {
        largest = e;
    }

    //Find Smallest
    if(b < smallest) {
        smallest = b;
    }
    if(c < smallest) {
        smallest = c;
    }
    if(d < smallest) {
        smallest = d;
    }

    if(e < smallest) {
        smallest = e;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

}

void program2() {
    int sum = 0;
    for(int i =1; i <= 50; i++) {
        sum = sum + i * 7;
    }

    cout << sum;

}

void program3() {
    int sum = 1;
    for (int i = 1; i <=10; i++) {
        sum = sum * i;
        cout << sum << " " << endl;

    }
}

void program4() {
    string normalWord;
    string reversedWord;
    cout << "Enter in a word: ";
    cin >> normalWord;

    for (int i=normalWord.length()-1; i>=0; i--) {
        reversedWord += normalWord[i];
    }

    if (reversedWord == normalWord) {
        cout << "is palindrome";
    } else {
        cout << "is not palindrome";
    }
}

void program5() {
    long n;
    bool isPrime = true;

    cout << "Enter a positive whole number: ";
    cin >> n;

    if(n == 0 || n == 1) {
        isPrime = false;
    } else  {
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
}

void program6() {
    vector<int> nums = {22, 21, 22, 24, 26, 74, 82, 91, 98, 65};

    int sum;
    double answer;

    for(int i =0; i < nums.size(); i++) {
        sum += nums[i];
    }

    answer = sum / nums.size();
    cout << "The average is: " << answer << endl;

}

void program7() {
    int n;

    cout << "Enter a positive Number: ";
    cin >> n;

    ifstream file("program7.txt");
    if(file.is_open())
    {
        string myArray[n];

        for(int i = 0; i < n; ++i)
        {
            file >> myArray[i];

            cout << myArray[i] << endl;
        }
    }
}

