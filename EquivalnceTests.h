#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testNegativePositiveIntegers();
        testZeros();
        testLargePositiveIntegers();
        testLargeNegativeIntegers();
        testSpecialCase();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testNegativePositiveIntegers () {
        Addition addition;
        if (addition.add(-7, 4) != -3){
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZeros() {
        Addition addition;
        if (addition.add(0,0) != 0){
            std::cout << "Test 4 failed!" << std::endl;

        }
    }

    void testLargePositiveIntegers() {
        Addition addition;
        if (addition.add(20000, 30000) != 50000){
            std::cout << "Test 5 failed" << std::endl;

        }
    }
    void testLargeNegativeIntegers() {
        Addition addition;
        if (addition.add(-30000, -30000) != -60000) {
            std::cout << "Test 6 failed!" << std::endl;

        }
    }

    void testSpecialCase(){
        Addition addition;
        if (addition.add(1, 0) != 1){
            std::cout << "Test Special Case 1 failed!" << std::endl;

        }
        if (addition.add(-1,0) != -1) {
            std::cout << "Test Special Case 2 failed" <<std::endl;

        }
    
    }
};