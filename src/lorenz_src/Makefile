compile : main.c input.c
	gcc -I ../../include/lorenz_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -I ../../include/gnuplot_lib -c *.c
	mv lorenz.o ../../lib/
	mv ./input.o ../../lib/
	mv ./main.o ../../lib/
	mv ./gnuplot_lorenz.o ../../lib/
	mv ./file_lorenz.o ../../lib/
	mv ./displayShell_lorenz.o ../../lib/
	gcc -o ../../bin/lorenz ../../lib/*.o

run : main.c
	../../bin/lorenz

clean:
	rm *.o ../../bin/* ../../lib/* ./*.dat
