# Usage:
# make			# compile all binary
# make clean	# remove all binaries and objects

.PHONY = all clean

CC := gcc		# complier to use

all: buffer

buffer:main.o buf.o 
		gcc -g -o buffer main.o buf.o

main.o: main.c
		gcc -g -c main.c

buf.o: buf.c
	   gcc -g -c buf.c

clean:
	@echo "Cleaning Up...."
	rm *.o buffer
