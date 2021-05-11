
CXX = g++
CFLAG = -Wall -Werror

window : window.o
	


window.o: window.cpp
	g++ window.cpp -o window -lsfml-graphics -lsfml-window -lsfml-system
	


-include