//Jeffrey Hunt
//1-7-21
//This is all my own work with
// I had help from the internet on program 5 and got help from the sub on program 7

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

int main() {
//        program1();
//        program2();
//        program3();
//        program4();
//        program5();
//        program6();
//        program7();
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

    //declare variable
    int sum = 0;

    // iterate through the first 50 numbers
    for(int i =1; i <= 50; i++) {
        // multiply and add each one
       if (i % 7==0) {
           sum += i;
       }
    }

    //print out the result
    cout << sum;

}

void program3() {
    //place the variable
    int sum = 1;
    //iterate through the first 10 numbers
    for (int i = 1; i <=10; i++) {
        sum = sum * i;
        //print out the sum of each number
        cout << sum << " ";

    }
}

void program4() {

    //declare the variables
    string normalWord;
    string reversedWord;

    //ask the user for input
    cout << "Enter in a word: ";
    cin >> normalWord;

    //iterate through the word and reverse the word
    for (int i=normalWord.length()-1; i>=0; i--) {
        reversedWord += normalWord[i];
    }

    //checks to see if the two words are palindrome
    if (reversedWord == normalWord) {
        cout << "is palindrome";
    } else {
        cout << "is not palindrome";
    }
}

void program5() {
    //declare the variables
    long n;
    bool isPrime = true;

    //ask the user for input
    cout << "Enter a positive whole number: ";
    cin >> n;

    //check to see if the number is 0 or 1 and declare it prime
    if(n == 0 || n == 1) {
        isPrime = false;
    } else  {
        //iterate through the number
        for(int i = 2; i <= n/2; i++) {
            //determine if it is divisible by something
            //if it is break out because it is not a prime number
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    //print out whether it is prime or not
    if(isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
}

void program6() {
    //declare the variables
    vector<int> nums = {22, 21, 22, 24, 26, 74, 82, 91, 98, 65};
    int sum;
    int answer;

    //iterate through the array
    for(int i =0; i < nums.size(); i++) {
        // add up all of the numbers
        sum += nums[i];
    }

    //find the average
    answer = sum / nums.size();
    //output the average
    cout << "The average is: " << answer << endl;

}

void program7() {
    //declare the variable
    int n;

    //ask the user for input
    cout << "Enter a positive Number: ";
    cin >> n;

    //declare our array
    string* myArray;
    myArray = new string[n];

    //find our file
    ifstream file("program7.txt");
    if(file.is_open())
    {
        //create variables to find longest word
        int longest = 0;
        int longestPosition;

        //iterate through the array
        for(int i = 0; i < n; ++i)
        {
            //put our words from the file into the array
            file >> myArray[i];

            //find the longest word
            if(longest < myArray[i].length()) {
                longest = myArray[i].length();
                longestPosition = i;

            }
        }

        //output the longest word
        cout << myArray[longestPosition] << endl;
    }

    //close the file
    file.close();
}

