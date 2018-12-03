compile : main.c input.c gnuplot.c file.c
	gcc -I ../../include/lorenz_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -c *.c
	mv lorenz.o ../../lib/lorenz.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
	mv ./displayShell_lorenz.o ../../lib/
	gcc -o ../../bin/lorenz ../../lib/*.o

run : main.c
	../../bin/lorenz

clean:
	rm ../../bin/* ../../lib/* ./*.dat
