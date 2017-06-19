// cpphello.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <sstream>
#include "HelloPerson.h"

namespace MyMath {
	template <class T>
	T sum(T a, T b)
	{
		return a + b;
	}
}

using namespace std;
using namespace MyMath;

void longWayToPrintString(string str);

int main()
{
	string line;
	HelloPerson person;
	double age = 0;
	auto message = "Hello World!\n";
	cout << message;
	cout << "What is your name? ";
	getline(cin,person.name);
	cout << "How old are you? ";
	getline(cin, line);
	stringstream(line) >> age;
	cout << "Hi " << person.name << ".\nYou are " << age << " years old.\n";
	auto sumage = sum(age, age);
	cout << "Twice your age = " << sumage << endl;
	cout << "Type of sum is: " << typeid(sumage).name() << endl;
	longWayToPrintString(person.name);
	cout << "Press (enter) to quit.\n";
	auto c = getchar();
}

void longWayToPrintString(string str)
{
	for (auto c : str)
	{
		cout << '[' << c << ']';
	}
	cout << endl;
}