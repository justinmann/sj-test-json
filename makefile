TARGET = test
LIBS = -lm
CC = g++
OBJECTS =  $(addprefix binary/,$(patsubst %.sj, %, $(wildcard *.sj)))

ifeq ($(mode),release)
	CFLAGS = -g -O3 -Wall -Wno-unused-but-set-variable -Wno-unknown-warning-option -Wno-unused-function -I.
else
	mode = debug
	CFLAGS = -g -Wall -Wno-unused-but-set-variable -Wno-unknown-warning-option -Wno-unused-function -I.
endif

.PHONY: default all clean
.PRECIOUS: $(OBJECTS) cfiles/%.cpp debug/%.debug errors/%.error

all: default

default: $(OBJECTS)

clean: 
	-rm -f cfiles/*.cpp
	-rm -f errors/*.error
	-rm -f debug/*.debug
	-rm -f binary/*

cfiles/%.cpp: %.sj
	../sj/sjc $^ --c-file=$@ --debug --debug-file=$(subst cfiles,debug,$(patsubst %.cpp,%.debug,$@)) --error-file=$(subst cfiles,errors,$(patsubst %.cpp,%.error,$@))

binary/%: cfiles/%.cpp
	if [ -f $^ ]; then $(CC) $(CFLAGS) $^ -o $@; fi

