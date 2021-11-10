CXX=g++

CXXFLAGS = -std=c++11

BINARIES=a

all: ${BINARIES}

a: project2.o
	${CXX} $^ -o $@

	
clean:
	/bin/rm -f ${BINARIES} *.o