CC=gcc
SOURCES=main.c func.c
OBJECTS=$(SOURCES:.c=.o)
LIBS=-lm
EXECUTABLE=myprj

all: $(EXECUTABLE)
$(OBJECTS): $(SOURCES)
	$(CC) -c $(SOURCES)
$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $(EXECUTABLE) $(OBJECTS) $(LIBS)
clean:
	rm *.o
