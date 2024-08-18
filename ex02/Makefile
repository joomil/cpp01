# Define the C++ compiler to use
CXX = g++

# Define any compile-time flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Define the target executable name
TARGET = main

# Define the source file
SRC = main.cpp

# Define the object file name
OBJ = $(SRC:.cpp=.o)

# Default target.
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Pattern rule for compiling .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up the build
clean:
	$(RM) $(TARGET) $(OBJ)

# Phony target for clean
.PHONY: all clean
