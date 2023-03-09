.PHONY:	all

all: module function block global return functionargs arithmetic ifelse loop

module:
	clang++ -O3 module.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o module

function:
	clang++ -O3 function.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o function

block:
	clang++ -O3 block.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o block

global:
	clang++ -O3 global.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o global

return:
	clang++ -O3 return.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o return

functionargs:
	clang++ -O3 functionargs.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o functionargs

arithmetic:
	clang++ -O3 arithmetic.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o arithmetic

ifelse:
	clang++ -O3 ifelse.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o ifelse

ifelse:
	clang++ -O3 loop.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o loop

clean:
	rm -fr module function block global return functionargs arithmetic ifelse loop *.ll *.bc