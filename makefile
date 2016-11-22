a.out: main.o BfsAlgorithm.o Graph.o Grid.o Point.o
	g++ -g -Wall -std=c++0x main.o BfsAlgorithm.o Graph.o Grid.o Point.o -o bfs
BfsAlgorithm.o: BfsAlgorithm.cpp BfsAlgorithm.h
	g++ -g -Wall -c -std=c++0x BfsAlgorithm.cpp
Graph.o: Graph.cpp Graph.h
	g++ -g -Wall -c -std=c++0x Graph.cpp 
Grid.o: Grid.cpp Grid.h
	g++ -g -Wall -c -std=c++0x Grid.cpp
Point.o: Point.cpp Point.h
	g++ -g -Wall -c -std=c++0x Point.cpp
main.o: main.cpp
	g++ -g -Wall -c -std=c++0x main.cpp
