CPPFLAGS = -std=c++11 -g -Wall -Werror -O2

all: main

main: main.cpp
	g++ -c main.cpp $(CPPFLAGS)
	g++ main.o -o main

clean:
	rm *~
	rm *.o
