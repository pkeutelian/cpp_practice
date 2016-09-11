CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=helloworld.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=tutorial

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


