// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <string>

void printQuestion(std::string question);

int main()
{
    std::string questions[4];
    int rng = rand() % 4;
    int ans = 0;

    questions[0] = "True or false, hamburgers are sandwiches.";
    questions[1] = "True or false, hot dogs are sandwiches.";
    questions[2] = "True or false, subs are sandwiches.";
    questions[3] = "True or false, normal pizzas are not blue.";

    for (int i = 0; i < 4; i++)
    {
        if (rng == i)
        {
            printQuestion(questions[rng]);
        }
    }

    std::cout << "\n\n1)True\n2)False\n\nChoice: \n";
    std::cin >> ans;

    if (ans == 1)
    {
        std::cout << "That's correct!\n\n";
    }
    else if (ans == 2)
    {
        std::cout << "That's incorrect.\n\n";
    }
    else
        std::cout << "The format of your answer is unacceptable";
}

void printQuestion(std::string question)
{
    std::cout << question;
}
