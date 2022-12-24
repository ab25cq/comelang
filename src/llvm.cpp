extern "C" {
#include "common.h"
}

#include "llvm/IR/Verifier.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/DIBuilder.h"
#include "llvm/IR/Metadata.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/IR/Attributes.h"
#include "llvm/IR/PassManager.h"
#include "llvm/IR/Verifier.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Bitcode/BitcodeWriter.h"

using namespace llvm;

unsigned long long int get_alloc_size(LLVMTypeRef llvm_type)
{
    DataLayout data_layout((const Module*)gModule);

    return data_layout.getTypeAllocSize((Type*)llvm_type);
}

LLVMValueRef get_block_address(LLVMBasicBlockRef block)
{
    BlockAddress* block_address = BlockAddress::get((BasicBlock*)block);
    
    return (LLVMValueRef)block_address;
}

LLVMValueRef call_va_arg_inst(LLVMBasicBlockRef block, LLVMValueRef value, LLVMTypeRef llvm_type)
{
    Value* cpp_value = (Value*)value;
    Type* cpp_type = (Type*)llvm_type;
    BasicBlock* cpp_block = (BasicBlock*)block;
    
    Instruction* inst = new VAArgInst(cpp_value, cpp_type);

    cpp_block->getInstList().push_back(inst);

    return (LLVMValueRef)inst;
}
