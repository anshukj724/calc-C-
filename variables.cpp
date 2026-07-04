#include <iostream>
#include <string>
using namespace std;


int main () {
    int age = 18;
    float height = 5.0;
    char grade = 'A';
    double weight = 60.65;
    bool isStudent = true;
    string name = "Anshu";
    float height2 = 5.9;


    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Name: " << name << endl;
    cout << "Height 2: " << height2 << endl;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You're an adult." << endl;
    } else {
        cout << "You're not an adult." << endl;
    }

    cout << "You are " << age << " years old." << endl;

    int marks = 82;

    if (marks >= 90) {
        cout << "You got an A!" << endl;
    } 
    else if (marks >= 80) {
        cout << "You still passed though." << endl;
    }
     else if (marks >=70) {
        cout << "You passed." << endl;
     }

int day = 3;

switch(day)
{
case 1:
    cout << "Monday";
    break;

case 2:
    cout << "Tuesday";
    break;

case 3:
    cout << "Wednesday";
    break;

default:
    cout << "Invalid";
}

    }