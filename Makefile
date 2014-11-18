CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Position.cpp Position.h main.cpp Plot.h Plot.cpp Objet.cpp Objet.h Robot.h Robot.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=launch

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -f *.o a.out *.ps \
