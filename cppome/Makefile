CPPFLAGS = -std=c++11 -g -Wall -Wno-deprecated -Werror -O2

OS = $(shell uname -s)

ifeq ($(OS), Darwin)
     LIBRARIES = -framework GLUT -framework OpenGL -framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo -lGLFW3 -lglew
else
     LIBRARIES = -lGL -lGLU -lglut -lGLFW3
endif

all: main

visualization.o: visualization.cpp
	g++ $(CPPFLAGS) -c visualization.cpp

main.o: main.cpp header.h connectome.h
	g++ $(CPPFLAGS) -c main.cpp

worm.o: worm.cpp header.h connectome.h
	g++ $(CPPFLAGS) -c worm.cpp 

main: main.o visualization.o worm.o
	g++ main.o visualization.o worm.o -o main $(LIBRARIES)

clean:
	rm -f *~
	rm -f *.o
	rm -f main
