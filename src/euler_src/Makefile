<<<<<<< HEAD
compile : main.c input.c calcul.c gnuplot.c file.c displayShell.c
=======
compile : main.c input.c calcul.c gnuplot.c file.c
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
	gcc -I ../../include/euler_lib -c *.c
	mv ./calcul.o ../../lib/calcul.o
	mv ./input.o ../../lib/input.o
	mv ./main.o ../../lib/main.o
	mv ./gnuplot.o ../../lib/gnuplot.o
	mv ./file.o ../../lib/file.o
<<<<<<< HEAD
	mv ./displayShell.o ../../lib/displayShell.o
=======
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
	gcc -o ../../bin/euler ../../lib/*.o -lm

run : main.c
	../../bin/euler

clean:
	rm ../../bin/* ../../lib/* ./*.dat
