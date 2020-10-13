OUTPUTNAME = test

.PHONY = out clean run

SRC = test.c

OBJ = test.o

LIB = -lmystr\
-lmyutils\
-lmasking

INC = -IInc

out: $(SRC)
	gcc $(SRC) $(INC) -c
	gcc $(OBJ) -L. $(LIB) -o $(OUTPUTNAME).out

run:
	LD_LIBRARY_PATH=. ./$(OUTPUTNAME).out

clean:
	rm *.out *.o