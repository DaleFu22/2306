ALL:main

SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))
GCC=gcc
RM=rm -rf
MYAPP=main

main:$(OBJ)
	$(GCC) $(OBJ) -o $(MYAPP)

%.o:%.c
	$(GCC) -c $< -o $@

.PHONY:clean cleanall
clean:
	$(RM) *.o
cleanall:
	$(RM) *.o $(MYAPP)

