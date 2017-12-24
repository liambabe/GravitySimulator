
SOURCES = $(shell find . -maxdepth 1 -name "*.cpp")

all: compile

rebuild: clean compile

compile:
	g++ -framework sfml-window -framework sfml-graphics -framework sfml-system $(SOURCES)

clean:
	rm -rf *.o