SRC = main.c linked.c
OBJ = main.o linked.o
HDR = linked.h
TRG = linked

# SRC is the list of all source (.c) files. Not really needed here.
# OBJ is the list of all object (.o) files. Object files are the compiled
#     versions of the corresponding source files.
# HDR is the list of all the (.h) header files. Header files contain
#     global variable declarations, type definitions and #defines of macros
# TRG is the target file. This is the executable file where all the .o
#     files will be assembled into.
#     See is the \ works...

# These 2 lines tell make what to do if any of the .o files is newer than target
${TRG}: ${OBJ}
	gcc ${OBJ} -o ${TRG}

main.o: main.c ${HDR}
	gcc -c main.c -o main.o

linked.o: linked.c ${HDR}
	gcc -c linked.c -o linked.o

clean:
	rm -f ${OBJ} ${TRG}


test: ${TRG}
	cat main.c | ./linked | ./linked > tempout
	@if diff tempout main.c; then echo CORRECT;\
	  else echo NOT CORRECT; \
	diff main.c tempout; fi
	@rm -f tempout

