#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
    string person1 = "Shopping Bag";
    string person2;

    cout << "Before moving:" << endl;
    cout << "Person 1: " << person1 << endl;
    cout << "Person 2: " << person2 << endl;

    person2 = std::move(person1);

    cout << "\nAfter moving:" << endl;
    cout << "Person 1: " << person1 << endl;
    cout << "Person 2: " << person2 << endl;

    return 0;
}
