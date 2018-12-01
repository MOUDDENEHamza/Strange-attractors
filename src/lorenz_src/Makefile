compile : main.c input.c calcul.c gnuplot.c file.c displayShell.c
	gcc -I ../../include/lorenz_lib -c *.c
	mv ./calcul.o ../../lib/calcul.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
	mv ./displayShell.o ../../lib/displayShell.o
	gcc -o ../../bin/lorenz ../../lib/*.o

run : main.c
	../../bin/lorenz

clean:
	rm ../../bin/* ../../lib/* ./*.dat
