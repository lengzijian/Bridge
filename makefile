CC=g++
FLAGS=-I.  
LDFLAGS=-L/usr/lib -Wall

OBJECTS=AbstractionImp.o main.o Abstraction.o 
ALL_BIN=brige

all:$(ALL_BIN) 

$(ALL_BIN):$(OBJECTS) 
	$(CC) $(FLAGS) $(LDFLAGS) -o $@ $^


%.o:%.cpp
	$(CC) -c $< $(FLAGS)

clean:
	rm -fr $(OBJECTS)
	rm -fr $(ALL_BIN)
