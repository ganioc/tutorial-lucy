
cppsrc= $(wildcard *.cpp)

cobj=$(cppsrc:.cpp=.o)

FLAGS= -g
LDFLAGS= -lm
CC=g++

.PHONY: all

all:hello sq

sq: $(cobj)
	$(CC) $(LDFLAGS) $< -o $@

hello: $(cobj)
	$(CC) $(LDFLAGS) $< -o $@ 

%.o:%.cpp
	$(CC) $(FLAGS) -o $@ -c $<

.PHONY: clean

clean:
	rm -f hello $(cobj) *~ hello sq




