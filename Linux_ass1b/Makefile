OUTPUTNAME = test

.PHONY = out clean

SRC = test.c\
Src/bitmask.c\
Src/myutils.c\
Src/mystring.c

INC = -IInc

out: $(SRC)
	gcc $(SRC) $(INC) -o $(OUTPUTNAME).out

run:
	./$(OUTPUTNAME).out

clean:
	rm *.out