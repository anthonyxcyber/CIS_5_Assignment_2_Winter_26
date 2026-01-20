BMI calculator using Visual Studio 22 & C++

  #include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int age;
    double height;
    double weight;
    int score;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    do {
        cout << "Enter your height in meters: ";
        cin >> height;
        if (height <= 0) {
            cout << "Invalid input. Height must be greater than 0.";
        }
    } while (height <= 0);

    do {
        cout << "Enter your weight in kilograms: ";
        cin >> weight;
        if (weight <= 0) {
            cout << "Invalid input. Weight must be greater than 0.";
        }
    } while (weight <= 0);

    do {
        cout << "Enter your test score (0-100): ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Invalid input. Score must be between 0 and 100.";
        }
    } while (score < 0 || score > 100);

    double bmi = weight / (height * height);

    string category;
    if (bmi < 18.5) {
        category = "Underweight";
    }
    else if (bmi < 25.0) {
        category = "Normal weight";
    }
    else if (bmi < 30.0) {
        category = "Overweight";
    }
    else {
        category = "Obese";
    }

    char grade;
    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << fixed << setprecision(2);
    cout << "Hey " << name << ", you're " << age
        << " years old with a BMI of " << bmi
        << " (" << category << ") and you achieved a grade "
        << grade << "! keep chasing those gains!";

    return 0;
}

Video Link:

https://drive.google.com/file/d/1zfNfKgdxaR9tXsuM09lDpe99dEZqgeBb/view?usp=sharing 
