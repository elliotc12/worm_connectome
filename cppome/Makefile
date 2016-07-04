CPPFLAGS = -std=c++11 -g -Wall -Wno-deprecated -Werror -O2

OS = $(shell uname -s)

ifeq ($(OS), Darwin)
     LIBRARIES = -framework GLUT -framework OpenGL -framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo -lGLFW3 -lglew
else
     LIBRARIES = -lGL -lGLU -lglut -lGLFW3
endif

all: main

opengl_test: opengl_test.cpp
	g++ $(CPPFLAGS) -c opengl_test.cpp 
	g++ opengl_test.o -o opengl_test $(LIBRARIES)

#g++ -Wall -march=i686 -g -I /usr/share/doc/NVIDIA_GLX-1.0/include/ -o Dov2b -L /usr/lib -L /usr/X11R6/lib -L/usr/local/lib Dov2.cc -lGL -lGLU -lglut

main: main.cpp
	g++ -c main.cpp $(CPPFLAGS)
	g++ main.o -o main

clean:
	rm *~
	rm *.o
