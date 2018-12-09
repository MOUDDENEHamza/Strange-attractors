GCC = gcc
INCLUDE = -I ../../include/struct_lib -I ../../include/calcul_lib -I ../../include/displayShell_lib -I ../../include/file_lib -I ../../include/gnuplot_lib -I ../../include/input_lib
FLAG = -lm 
SRC = $(wildcard *.c)
OBJ = calcul.o dynamicSystems.o displayShell.o file.o gnuplot.o input.o main.o inputSystems.o struct.o
EXEC = ../../bin/main
LIB = ../../lib/
MAKE = make all

all :
	make build -s
	make compile -s
	make move -s
	make run -s

build : 
	
	cd ../calcul_src/ && $(MAKE)
	cd ../displayShell_src && $(MAKE)
	cd ../file_src/ && $(MAKE)
	cd ../gnuplot_src/ && $(MAKE)
	cd ../input_src/ && $(MAKE)
	cd ../struct_src/ && $(MAKE)
	cd ../main_src
	
compile : $(SRC)
	$(GCC) $(INCLUDE) -c $(SRC)
	

move : $(OBJ)
	mv $(OBJ) $(LIB)

run : $(SRC)
	$(GCC) -o $(EXEC) $(LIB)*.o $(FLAG)
	$(EXEC)

clean:
	rm $(EXEC) $(LIB)* ./*.dat