compile : main.c
	gcc -I ../../include/lorenz_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -I ../../include/gnuplot_lib -I ../../include/input_lib -c *.c
	mv lorenz.o ../../lib/
	mv ./input_lorenz.o ../../lib/
	mv ./main.o ../../lib/
	mv ./gnuplot_lorenz.o ../../lib/
	mv ./file_lorenz.o ../../lib/
	mv ./displayShell_lorenz.o ../../lib/
	gcc -o ../../bin/lorenz ../../lib/*.o

run : main.c
	../../bin/lorenz

clean:
	rm ../../bin/* ../../lib/* ./*.dat
