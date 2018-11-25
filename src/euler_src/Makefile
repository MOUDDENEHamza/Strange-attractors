compile : main.c input.c calcul.c gnuplot.c file.c
	gcc -I ../../include/euler_lib -c *.c
	mv ./calcul.o ../../lib/calcul.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
	gcc -o ../../bin/euler ../../lib/*.o -lm

run : main.c
	../../bin/euler

clean:
	rm ../../bin/* ../../lib/* ./*.dat
