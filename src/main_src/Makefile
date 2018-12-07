all : 
	make build
	make compile
	make run

build : 
	cd ../calcul_src/ && make compile
	cd ../displayShell_src/ && make compile
	cd ../file_src/ && make compile
	cd ../gnuplot_src/ && make compile
	cd ../input_src/ && make compile
	cd ../main_src

compile : main.c
	gcc -I ../../include/struct_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -I ../../include/gnuplot_lib -I ../../include/input_lib -c *.c
	mv calcul.o ../../lib/
	mv input.o ../../lib/
	mv main.o ../../lib/
	mv gnuplot.o ../../lib/
	mv file.o ../../lib/
	mv displayShell.o ../../lib/
	mv dynamicSystems.o ../../lib/
	mv inputSystems.o ../../lib/
	gcc -o ../../bin/main ../../lib/*.o -lm

run : main.c
	../../bin/main

clean:
	rm ../../bin/* ../../lib/* ./*.dat
