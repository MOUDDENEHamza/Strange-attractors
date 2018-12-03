compile : main.c input.c gnuplot.c
	gcc -I ../../include/euler_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -c *.c
	mv euler.o ../../lib/
	mv ./input.o ../../lib/
	mv ./main.o ../../lib/
	mv ./gnuplot.o ../../lib/
	mv ./file_euler.o ../../lib/
	mv ./displayShell_euler.o ../../lib/
	gcc -o ../../bin/euler ../../lib/*.o -lm

run : main.c
	../../bin/euler

clean:
	rm *.o ../../bin/* ../../lib/* ./*.dat
