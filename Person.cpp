//
// Created by hloi on 12/8/2022.
//

#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}
