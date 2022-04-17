# Usage:
# make			# compile all binary
# make clean	# remove all binaries and objects

.PHONY = all clean

CC := gcc		# complier to use

all: calculator

calculator:calc.o addition.o difference.o multiplication.o division.o
			gcc -g -o calculator calc.o addition.o difference.o multiplication.o division.o

calc.o: calc.c
		gcc -g -c calc.c

addition.o: addition.c
			gcc -g -c addition.c

difference.o: difference.c
			  gcc -g -c difference.c

multiplication.o: multiplication.c
				  gcc -g -c multiplication.c

division.o: division.c
			gcc -g -c division.c

clean:
	@echo "Cleaning Up...."
	rm *.o calculation
