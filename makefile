CXX = g++
CXXFLAGS += -std=c++11
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g#

OBJS = inputValidation.o Menu.o recursive.o recursiveMain.o

SRCS = inputValidation.cpp Menu.cpp recursive.cpp recursiveMain.o

HEADERS = inputValidation.h Menu.h recursive.hpp

recursive: ${OBJS} ${HEADERS}
		${CXX} ${OBJS} -o recursive

${OBJS}: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o recursive
