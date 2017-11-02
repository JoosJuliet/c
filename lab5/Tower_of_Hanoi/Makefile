CC = gcc
TARGET = hanoi
OBJECTS = hanoi.h main.o move.o get.o

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

clean :
	rm *.o hanoi
