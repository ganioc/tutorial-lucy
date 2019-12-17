

CC=g++

.PHONY:all

all: cdir

cdir:
	make -C ./day1


.PHONY: clean
clean:
	make -C ./day1 clean

