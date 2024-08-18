# Makefile for Zombie project

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Object files
OBJS = main.o Zombie.o newZombie.o randomChump.o

# Target executable
TARGET = zombie_program

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to perform a full clean
fclean: clean
	rm -f $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)
