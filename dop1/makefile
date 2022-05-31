CC=gcc
SOURCES=pre.c
OBJECTS=$(SOURCES:.c=.o)
LIBS=-lm
EXECUTABLE=myprj

all: $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $(EXECUTABLE) $(OBJECTS) $(LIBS)
$(OBJECTS): $(SOURCES)
	$(CC) -c $(SOURCES)
clean:
	rm *.o
