#include <iostream>
#include <string>
#include "Pair.h"
#include "Person.h"
#include <vector>
using namespace std;

int main() {
//   Pair<int, string> intPair;
//   Pair<int, string> intOtherPair;
//   intPair.Input();
//   intOtherPair.Input();
//   intPair.ShowComparison(&intOtherPair);
//
//   Pair<double, int> doublePair;
//   Pair<double, int> doubleOtherPair;
//   doublePair.Input();
//   doubleOtherPair.Input();
//   doublePair.ShowComparison(&doubleOtherPair);

   Pair<string, int> wordPair;
   Pair<string, int> wordOtherPair;
   wordPair.Input();
   wordOtherPair.Input();
//   wordPair.ShowComparison(&wordOtherPair);

    Person p1("p1", 20);
    Person p2("p2", 21);
    Pair<Person, Person> personPair(p1, p2);
    Pair<int, Person> intPersonPair(10, p2);
   vector< Pair<string, int> > pairs;
   pairs.push_back(wordPair);
   pairs.push_back(wordOtherPair);
   pairs.at(0).ShowComparison(&pairs.at(1));
   return 0;
}
