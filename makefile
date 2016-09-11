CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=helloworld.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=helloworld

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


