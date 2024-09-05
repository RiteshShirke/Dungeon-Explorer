CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

SRC = src/main.cpp src/Dungeon.cpp src/Player.cpp src/Enemy.cpp src/CombatSystem.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = Dungeon

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
