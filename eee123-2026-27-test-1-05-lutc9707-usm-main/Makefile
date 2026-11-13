#NRMN: DO NOT EDIT/DELETE THIS FILE
main.o: main.cpp main.hpp
	g++ -c -DAUTOGRADE -Wall -Wconversion main.cpp

test1.o: test1.cpp
	g++ -c test1.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

test3.o: test3.cpp
	g++ -c test3.cpp

test4.o: test4.cpp
	g++ -c test4.cpp

test5.o: test5.cpp
	g++ -c test5.cpp

test6.o: test6.cpp
	g++ -c test6.cpp

test7.o: test7.cpp
	g++ -c test7.cpp


test1: main.o test1.o
	g++ main.o test1.o -o output
	./output

test2: main.o test2.o
	g++ main.o test2.o -o output
	./output

test3: main.o test3.o
	g++ main.o test3.o -o output
	./output

test4: main.o test4.o
	g++ main.o test4.o -o output
	./output

test5: main.o test5.o
	g++ main.o test5.o -o output
	./output

test6: main.o test6.o
	g++ main.o test6.o -o output
	./output

test7: main.o test7.o
	g++ main.o test7.o -o output
	./output

clean:
	rm *.o output
