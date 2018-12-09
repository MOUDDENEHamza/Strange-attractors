GCC = gcc
INCLUDE = -I ../../include/calcul_lib/ -I ../../include/struct_lib/
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : compile move

compile : $(SRC)
	$(GCC) $(INCLUDE) -c $(SRC)

move : $(OBJ)
	mv $(OBJ) ../main_src/