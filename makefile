CXX = g++
CXXFLAGS = -std=c++11 -Wall
OBJS = main.o Invoice.o
DEPS = Invoice.h InvoiceTest.h EquivalenceTests.h UnitTest.h Addition.h

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o main $(OBJS)

main.o: main.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c main.cpp

Invoice.o: Invoice.cpp Invoice.h
	$(CXX) $(CXXFLAGS) -c Invoice.cpp

clean:
	rm -f *.o main
