#ifndef INVOICE_TEST_H
#define INVOICE_TEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testConstructor() {
        Invoice invoice("INV123");
        if (invoice.getInvoiceId() != "INV123" || invoice.getDollarsOwed() != 0.0) {
            std::cout << "Constructor test failed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        Invoice invoice("TEST");
        invoice.addServiceCost(25.50);
        if (invoice.getDollarsOwed() != 25.50) {
            std::cout << "AddServiceCost Test 1 failed!" << std::endl;
        }

        invoice.addServiceCost(0); // Should be ignored
        if (invoice.getDollarsOwed() != 25.50) {
            std::cout << "AddServiceCost Test 2 (zero cost) failed!" << std::endl;
        }

        invoice.addServiceCost(-10); // Should be ignored
        if (invoice.getDollarsOwed() != 25.50) {
            std::cout << "AddServiceCost Test 3 (negative cost) failed!" << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("DUE");
        invoice.addServiceCost(10);
        invoice.addServiceCost(20);
        if (invoice.getDollarsOwed() != 30) {
            std::cout << "GetDollarsOwed test failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("XYZ999");
        if (invoice.getInvoiceId() != "XYZ999") {
            std::cout << "GetInvoiceId test failed!" << std::endl;
        }
    }
};

#endif
