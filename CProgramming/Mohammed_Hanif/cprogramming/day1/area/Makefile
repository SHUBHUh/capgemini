# Usage:
# Usage:
# make			# compile all binary
# make clean	# remove all binaries and objects

.PHONY = all clean

CC := gcc		# complier to use

all: area

area:area.o circle.o triangle.o rectangle.o square.o
			gcc -g -o area area.o circle.o triangle.o rectangle.o square.o

area.o: area.c
		gcc -g -c area.c


circle.o: circle.c
		 gcc -g -c circle.c

triangle.o: triangle.c
			gcc -g -c triangle.c 

rectangle.o: rectangle.c
			 gcc -g -c rectangle.c

square.o: square.c
		gcc -g -c square.c

clean:
	@echo "Cleaning Up...."
	rm *.o area