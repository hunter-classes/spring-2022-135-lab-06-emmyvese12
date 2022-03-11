main: main.o funcs.o caesar.o
	g++ -o main main.o funcs.o caesar.o

tests: tests.o funcs.o caesar.o
	g++ -o tests tests.o funcs.o caesar.o

test-ascii: test-ascii.cpp
	g++ -o test-ascii test-ascii.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -c main.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ -c tests.cpp

clean:
	rm -f main.o funcs.o tests.o caesar.o
