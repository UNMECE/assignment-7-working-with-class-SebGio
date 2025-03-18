main: main.o magneticField.o electricField.o
	g++ -o main main.o magneticField.o electricField.o -std=c++11
main.o: main.cpp
	g++ -c main.cpp -std=c++11
magneticField.o: magneticField.cpp
	g++ -c magneticField.cpp -std=c++11
electricField.o: electricField.cpp
	g++ -c electricField.cpp -std=c++11
