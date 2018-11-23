main: main.c input.c calcul.c gnuplot.c
	gcc -I ../include -c input.c calcul.c gnuplot.c main.c
	mv ./calcul.o ../lib/calcul.o
	mv ./input.o ../lib/input.o
	mv ./main.o ../lib/main.o
	mv ./gnuplot.o ../lib/gnuplot.o
	gcc -o ../bin/main ../lib/*.o

all: main
	../bin/main

clean:
	rm ../bin/* ../lib/* ./lorenz.dat
