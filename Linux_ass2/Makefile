OUTPUTNAME = test

.PHONY = out clean

SRC = test.c\

LIB = -lmystr\
-lmyutils\
-lmasking

OBJ = test.o

INC = -IInc

out: $(SRC)
	gcc $(SRC) $(INC) -c
	gcc $(OBJ) -L. -o $(OUTPUTNAME).out $(LIB)


run:
	./$(OUTPUTNAME).out

clean:
	rm *.out *.o