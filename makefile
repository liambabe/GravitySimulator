SOURCES = $(shell find . -maxdepth 4 -name "*.cpp")

all: compile

linux:
	g++ -g -Iinclude/ -lsfml-graphics -lsfml-window -lsfml-system $(SOURCES)

rebuild: clean compile

compile:
	g++ -framework sfml-window -framework sfml-graphics -framework sfml-system $(SOURCES)

	
clean:
	rm -rf *.o
