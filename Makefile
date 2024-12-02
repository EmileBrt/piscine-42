# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Target executable
TARGET = main

# Source files
SRC = main.c
HEADERS = ft.h

# Default target: compile and run
all: $(TARGET)
	./$(TARGET)

# Build target: only compile
build: $(TARGET)

# Rule to build the target executable
$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) $(HEADERS) -o $(TARGET)

# Rule to clean up generated files
clean:
	rm -f $(TARGET)

# Rule to rebuild the project
rebuild: clean build