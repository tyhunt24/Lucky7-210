//Jeffrey Hunt
//1-7-21
//This is all my own work

#include <iostream>
using namespace std;

//void program1();
//void program2();
//void program3();
//void program4();
void program5();
//void program6();
//void program7();

int main() {

//    program1();
//    program2();
//    program3();
//    program4();
    program5();
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

    }
    cout << sum;
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
    
}

