
main: main.cpp Arena.h Arena.cpp FighterInterface.h Fighter.h Fighter.cpp Archer.h Archer.cpp Cleric.h Cleric.cpp Robot.h Robot.cpp
	g++ -std=c++11 main.cpp Arena.cpp Fighter.cpp Archer.cpp Cleric.cpp Robot.cpp -o main
