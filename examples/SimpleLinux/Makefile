CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=

CFLAGS := -O3 -I .

SRCS := $(shell find . -name '*.c')
OBJS := $(subst .cpp,.o,$(SRCS))

WD := $(shell pwd)

all: deepbelief

deepbelief: $(OBJS)
	gcc -o deepbelief $(OBJS) -L$(WD) -ljpcnn

%.o: %.cpp
	$(CC) $(CPPFLAGS) -fPIC -c $< -o $(basename $@).o

clean:
	find . -iname "*.o" -exec rm '{}' ';'

