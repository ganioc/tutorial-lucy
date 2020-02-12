
cppsrc= $(wildcard *.cpp)

cobj=$(cppsrc:.cpp=.o)
sobj=$(sqrt:.cpp=.o)

FLAGS= -g
LDFLAGS= -lm
CC=g++

.PHONY: all

all:hello sq plus cylinder_area

cylinder_area: cylinder_area.o
	$(CC) $(LDFLAGS) $< -o $@


plus: plus.o
	$(CC) $(LDFLAGS) $< -o $@

sq: sqrt.o
	$(CC) $(LDFLAGS) $< -o $@

hello: $(cobj)
	$(CC) $(LDFLAGS) $< -o $@ 

%.o:%.cpp
	$(CC) $(FLAGS) -o $@ -c $<

.PHONY: clean

clean:
	rm -f hello $(cobj) *~ hello sq plus cylinder_area




