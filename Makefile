CXX = g++
CXXFLAGS = -Wall -std=c++11
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))
EXECUTABLE = $(BIN_DIR)/tp2.out

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)/* $(OBJ_DIR)/*

.PHONY: clean
