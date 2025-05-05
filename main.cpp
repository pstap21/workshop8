#include "UnitTest.h"
#include "EquivalnceTests.h"
#include "InvoiceTest.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    InvoiceTest invoiceTest;
    invoiceTest.runTests();



    return 0;

}