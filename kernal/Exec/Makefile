#Makefile for building demo application

#Edit this file to compile extra c files into their own programs
TARGETS=helloExec execDemo selfExec

CROSS_TOOL = 
CC_CPP = $(CROSS_TOOL)g++
CC_C = $(CROSS_TOOL)gcc

CFLAGS = -Wall -g -std=c99 -Werror
# Wall - to turn on all the warnings
# g - to get debug information
# std=c99 - to use for loops
# Werror - to turn ON all the warnings into errors

all: clean $(TARGETS)

$(TARGETS):
	$(CC_C) $(CFLAGS) $@.c -o $@

clean:
	rm -f $(TARGETS)
