## using opt tool

```
opt -O1 -S test.ll > 1.ll
opt -O2 -S test.ll > 2.ll
```

## pass and pass manager

1. place the *FnNamePrint* folder in *llvm-project-11.0.0/llvm/lib/Transforms/* folder 
2. add *add_subdirectory(FnNamePrint)* to the end of *llvm-project-11.0.0/llvm/lib/Transforms/CMakeLists.txt*
3. build llvm 
4. run 
```
llvm-project-11.0.0/build/bin/opt -load llvm-project-11.0.0/build/lib/LLVMFnNamePrint.so -funcnameprint test.ll
```

## instruction combining 

1. relace the *InstCombineAndOrXor.cpp* file in *llvm-project-11.0.0/llvm/lib/Transforms/InstCombine* folder with the one present in the current folder
2. build llvm 
3. run 

```
llvm-project-11.0.0/build/bin/opt -instcombine -S instcombine.ll 
```