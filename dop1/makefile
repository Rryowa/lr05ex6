CC=gcc
SOURCES=pre.c
OBJECTS=$(SOURCES:.c=.o)
LIBS=-lmw
EXECUTABLE=mypr3
$(OBJECTS):
	$(SOURCES)
$(EXECUTABLE):
	$(CC) -c $(SOURCES)
	$(CC) $(OBJECTS) -o $@
all:
	$(EXECUTABLE)
clean:
	rm $(EXECUTABLE)
	rm *.o
