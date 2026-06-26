#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Welcome to the Quiz Application =====\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\n2. Which language is primarily used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\n4. Which symbol is used for single-line comments in C++?\n";
    cout << "1. /* */\n2. #\n3. //\n4. <!-- -->\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\n5. Which operator is used for addition?\n";
    cout << "1. -\n2. *\n3. +\n4. /\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent! You got all answers correct.\n";
    else if (score >= 3)
        cout << "Good Job! Keep practicing.\n";
    else
        cout << "Better luck next time.\n";

    return 0;
}