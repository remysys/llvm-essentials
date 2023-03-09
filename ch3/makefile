.PHONY:	all

all: gep load store insert extract

gep:
	clang++ -O3 gep.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o gep

load:
	clang++ -O3 load.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o load

store:
	clang++ -O3 store.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o store

insert:
	clang++ -O3 insert.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o insert

extract:
	clang++ -O3 extract.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core` -o extract

clean:
	rm -fr gep load store insert extract *.ll *.bc