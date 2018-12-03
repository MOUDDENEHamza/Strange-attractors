compile : main.c input.c gnuplot.c file.c
	gcc -I ../../include/euler_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -c *.c
	mv euler.o ../../lib/euler.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
	mv ./displayShell_euler.o ../../lib/
	gcc -o ../../bin/euler ../../lib/*.o -lm

run : main.c
	../../bin/euler

clean:
	rm ../../bin/* ../../lib/* ./*.dat
