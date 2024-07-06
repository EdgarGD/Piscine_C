CC = gcc
FLAGS = -lncurses -Wall -Wextra -Werror
BUILD = ../build/$(TARGET)
TARGET = pong
CLANG = clang-format -i *.c *.h
CPPCHECK = cppcheck --enable=all --suppress=missingIncludeSystem .
VALGRIND = valgrind --tool=memcheck --leak-check=yes . /a.out
SRC = $(wildcard *.c)

all: $(TARGET)

rebuild: all clean

$(TARGET): pong
	$(CC) $(SRC) $(FLAGS) -o $(BUILD) && $(CPPCHECK) && $(CLANG) && $(BUILD)

clean:
	rm *.o ../build/$(TARGET)