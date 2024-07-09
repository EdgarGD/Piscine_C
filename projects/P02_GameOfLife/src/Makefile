CC = gcc
FLAGS = -lncurses 
BUILD = ../build/$(TARGET)
TARGET = gameoflife
CLANG = clang-format -i *.c *.h
CPPCHECK = cppcheck --enable=all --suppress=missingIncludeSystem .
VALGRIND = valgrind --tool=memcheck --leak-check=yes . /a.out
SRC = $(wildcard *.c)
INPUT = < $(TXTFILE)
TXTFILE = field.txt

all: $(TARGET)

rebuild: all clean

$(TARGET): $(TARGET)
	$(CC) $(SRC) $(FLAGS) -o $(BUILD) && $(CPPCHECK) && $(CLANG) && $(BUILD) $(INPUT)
clean:
	rm *.o ../build/$(TARGET)