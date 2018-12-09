GCC = gcc
INCLUDE = -I ../../include/calcul_lib/ -I ../../include/struct_lib/
OBJ_C = calcul.c dynamicSystems.c
OBJ_O =  calcul.o dynamicSystems.o
COMPILE = compile

all : $(COMPILE) $(MOVE)

$(COMPILE) : ${OBJ_C)
	$(GCC) $(INCLUDE) -c $(OBJ)

$(MOVE) : $(OBJ_O)
	mv $(OBJ_O) ../main_src/
