#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

static LLVMContext TheContext;
static LLVMContext& getGlobalContext() {
  return TheContext;
}

static LLVMContext &Context = getGlobalContext();
static Module *ModuleOb = new Module("toy compiler", Context);

int main(int argc, char *argv[]) {
  ModuleOb->print(errs(), nullptr);
  return 0;
}