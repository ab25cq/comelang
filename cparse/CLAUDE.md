# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Overview

This is a C parser implementation built with Bison and Flex that targets C17 with GCC/Clang extensions and GNU extended inline assembly support. The parser generates an Abstract Syntax Tree (AST) and provides validation and dumping capabilities.

## Build Commands

### Primary Build
- `make` or `make cparse` - Build the complete parser executable
- `make clean` - Remove all generated files and object files
- `sh fast_build.sh` - Quick build script that runs make clean && make

### Grammar Generation
- Parser files are auto-generated from grammar definitions:
  - `c.y` (Bison grammar) → `parser.c` and `parser.h`
  - `c.l` (Flex lexer) → `lexer.c`

### Running the Parser
- `./cparse <file.c>` - Parse a C source file and output AST information
- Parser runs with debug output enabled by default (`yydebug = 1`)

## Architecture

### Core Components

1. **Grammar Definition** (`c.y`)
   - Bison grammar file defining C17 syntax with extensions
   - Supports GNU extended inline assembly syntax
   - Includes statement expressions and attributes for kernel/embedded development

2. **Lexer** (`c.l`) 
   - Flex lexer specification
   - Skips preprocessor lines (integrate with external cpp pipeline as needed)

3. **AST System** (`ast.h`, `ast.c`)
   - Comprehensive AST node types covering expressions, statements, declarations
   - Memory management with `ast_free_all()`
   - Validation via `ast_validate()`
   - Debug output via `ast_dump()`

4. **Type System** (`typedefs.h`, `typedefs_impl.c`)
   - Type definition tracking and management
   - Supports typedef resolution

### AST Node Types
The parser generates AST nodes for:
- Function definitions with parameter lists and version tags
- Struct/union/enum definitions with bitfield support
- Expression nodes (binary, unary, calls, indexing, member access, assignments)
- Statement nodes (compound blocks, returns, declarations)
- Initialization lists with designated initializers
- Type casting and conditional expressions

### Build System
- Uses Make with automatic dependency tracking
- Clang is the default compiler (`CC ?= clang`)
- Debug builds enabled by default with `-DYYDEBUG`
- Links: `parser.o`, `lexer.o`, `main.o`, `ast.o`, `typedefs_impl.o`

## Test Files
- `test/` directory contains numerous C test files for parser validation
- Files cover various C language constructs, edge cases, and extensions
- Use these for regression testing when modifying the grammar

## Development Notes
- The parser accepts C17 baseline plus many GCC/Clang extensions
- Inline assembly support includes basic asm, extended asm with constraints, symbolic names, and asm goto
- Preprocessor integration is external - the lexer skips preprocessor directives