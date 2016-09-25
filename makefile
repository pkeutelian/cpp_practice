CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=./2_HelloWorld/helloworld.cpp ./3_FirstLast/39Type_Conversions.cpp ./3_FirstLast/firstlast.cpp ./3_FirstLast/string_compare.cpp ./3_FirstLast/3LetterWriting.cpp ./4_Computation/4_Computation.cpp ./main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tutorial

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


