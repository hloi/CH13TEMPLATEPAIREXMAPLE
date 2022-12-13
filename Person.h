//
// Created by hloi on 12/8/2022.
//

#ifndef CH13TEMPLATEPAIREXMAPLE_PERSON_H
#define CH13TEMPLATEPAIREXMAPLE_PERSON_H

#include <string>
#include <sstream>

using std::string;
using std::ostream;

class Person {
private:
    string name;
    int age;
public:
    Person() {}
    Person(string name, int age);
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    // implement comparision operators <, ==, >
    bool operator<(const Person& p);
    bool operator>(const Person& p);
    bool operator==(const Person& p);

    // override cout operator
    friend ostream& operator<<(ostream& out, Person& p);

};


#endif //CH13TEMPLATEPAIREXMAPLE_PERSON_H
