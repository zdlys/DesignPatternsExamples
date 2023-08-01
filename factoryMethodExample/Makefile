# Define required variables
CC = g++
CFLAGS = -Iinclude -Wall -std=c++14
DEPS = $(wildcard include/*.h)
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=obj/%.o)
TARGET = app

# Default target
all: $(TARGET)

# Create a directory for object files
$(shell mkdir -p obj)

# General rule for building objects
obj/%.o: src/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Rule for building the target
$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

# Clean up the object files and target
.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGET)
