// Name     : Construction-intializaiton-lists.cpp

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

    Person person1;
    Person person2("Bob", 42);
    Person person3("Sue", 25);

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}
