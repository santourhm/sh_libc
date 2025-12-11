GCC  = gcc
OPTIMIZATION_LEVEL = -O1

INCLUDES = include
SRC = $(wildcard src/*.c)

OUT_P = program
OUT_T = test
MAIN = main.c
TEST = test.c
UNITY = $(wildcard unity/*.c)

run: $(SRC)
	$(GCC) $(OPTIMIZATION_LEVEL) -I $(INCLUDES) $(SRC) $(MAIN) -o $(OUT_P)

test: $(SRC)
	$(GCC) -g $(OPTIMIZATION_LEVEL) $(UNITY) $(TEST) $(SRC) -o $(OUT_T)

clean:
	rm -f program test
