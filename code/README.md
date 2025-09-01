GCC Extensions C Samples

This folder contains small, self-contained C programs that demonstrate GCC-specific extensions. Build them all with the provided Makefile.

Build:

```
make -C code
```

Run an individual sample, e.g.:

```
./code/bin/attrs
./code/bin/statement_expr
./code/bin/nested_functions
./code/bin/labels_as_values
./code/bin/vector_types
./code/bin/builtins
./code/bin/typeof_auto
```

Notes:
- Compiles with `-std=gnu17` to enable GNU extensions on top of C17.
- Files are intentionally minimal and print outputs demonstrating the feature.
- Some extensions are compile-time only (e.g., attributes guiding optimizations) and won’t visibly change runtime behavior.
