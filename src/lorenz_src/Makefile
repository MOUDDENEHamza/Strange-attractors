build : 
	cd ../calcul_src/ && make compile
	cd ../displayShell_src/ && make compile
	cd ../file_src/ && make compile
	cd ../gnuplot_src/ && make compile
	cd ../input_src/ && make compile
	cd ../lorenz_src

compile : main.c
	gcc -I ../../include/lorenz_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -I ../../include/gnuplot_lib -I ../../include/input_lib -c *.c
	mv calcul.o ../../lib/
	mv input.o ../../lib/
	mv main.o ../../lib/
	mv gnuplot.o ../../lib/
	mv file.o ../../lib/
	mv displayShell.o ../../lib/
	gcc -o ../../bin/lorenz ../../lib/*.o -lm

run : main.c
	../../bin/lorenz

clean:
	rm ../../bin/* ../../lib/* ./*.dat
