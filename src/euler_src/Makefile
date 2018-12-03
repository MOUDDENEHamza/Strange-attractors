compile : main.c input.c gnuplot.c file.c displayShell.c
	gcc -I ../../include/euler_lib -c *.c
	mv euler.o ../../lib/euler.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
	mv ./displayShell.o ../../lib/displayShell.o
	gcc -o ../../bin/euler ../../lib/*.o -lm

run : main.c
	../../bin/euler

clean:
	rm ../../bin/* ../../lib/* ./*.dat
