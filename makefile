CXX=g++
CXXFLAGS=-Wall
CXXFLAGS+=-std=c++11
CXXFLAGS+=-g
NAME=zoo.exe

DEP_FLAGS=-MMD
DEP_FLAGS+=-MP
CXXFLAGS+=$(DEP_FLAGS)

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $@

.PHONY: clean run valgrind

clean: 
	rm -rf $(NAME) $(DEP) $(OBJ)

run: 
	./$(NAME)

valgrind:
	valgrind --leak-check=yes ./$(NAME)

-include $(DEP)
