CXX			:= g++
CXXFLAGS	:= -Wall -g -O3

INCLUDE 	:= -Iinclude
BIN			:= bin
SRC			:= src
OBJ			:= obj

LIBRARIES	:= 

SOURCES 	:= $(wildcard $(SRC)/*.cpp)
OBJECTS 	:= $(addprefix $(OBJ)/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE 	:= $(BIN)/program

all: clean run

run: $(EXECUTABLE)
	@echo "Running..."
	@$(EXECUTABLE)
	@echo "Running successfully!"

$(EXECUTABLE): $(OBJECTS)
	@echo "Linking..."
	@$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ $^ $(LIBRARIES)
	@echo "Linking successfully!"

$(OBJ)/%.o: $(SRC)/%.cpp
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) $(INCLUDE) -c -o $@ $<
	@echo "$< is compiled successfully!"

clean:
	@echo "Cleaning..."
	@del $(BIN)\*.exe $(OBJ)\*.o
	@echo "Cleaning is done!"
