//
// Created by hloi on 12/8/2022.
//

#ifndef CH13TEMPLATEPAIREXMAPLE_PAIR_H
#define CH13TEMPLATEPAIREXMAPLE_PAIR_H
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*** Template class Pair ***/
template<typename TheType, typename Type2>
class Pair {
public:
    Pair() {}
    Pair(TheType firstVal, Type2 secondVal);
    void Input();
    void Output();
    char CompareWith(Pair<TheType, Type2>* otherPair) ;
    void ShowComparison(Pair<TheType, Type2>* otherPair);

private:
    TheType firstVal;
    Type2 secondVal;
};

// Return '<', '==', or '>' according to whether the Pair is less than,
// equal to, or greater than the argument Pair
template<typename TheType, typename Type2>
char Pair<TheType, Type2>::CompareWith(Pair<TheType, Type2>* otherPair) {
    /* Type your code here. */
    if (this->firstVal < otherPair->firstVal) {
        return '<';
    }
    if (this->firstVal > otherPair->firstVal) {
        return '>';
    }
    if (this->firstVal == otherPair->firstVal) {
        return '=';
    }
}

// Input values into a pair
template<typename TheType, typename Type2>
void Pair<TheType, Type2>::Input() {
    /* Type your code here. */
    cin >> firstVal;
    cin >> secondVal;
}

// Output a Pair
template<typename TheType, typename Type2>
void Pair<TheType, Type2>::Output() {
    /* Type your code here. */
    cout << "[" << firstVal << ", " << secondVal << "]";
}

// Output both pairs with a comparison symbol in between
template<typename TheType, typename Type2>
void Pair<TheType, Type2>::ShowComparison(Pair<TheType, Type2>* otherPair) {
    /* Type your code here. */
    this->Output();
    cout << CompareWith(otherPair);
    otherPair->Output();
    cout << endl;
}

template<typename TheType, typename Type2>
Pair<TheType, Type2>::Pair(TheType firstVal, Type2 secondVal) {
    this->firstVal = firstVal;
    this->secondVal = secondVal;
}


/*** End template class Pair ***/


#endif //CH13TEMPLATEPAIREXMAPLE_PAIR_H
