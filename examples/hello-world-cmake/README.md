This is a simple hello-world example that uses the RLBox API to call functions
in a simple sandboxed library. This example uses the NOOP-sandbox; we will
extend the example to use the Wasm-based sandboxed in a later example.

- `mylib.{h,c}` is the simple library
- `main.cpp` is our main program

### Build  and run

```
make
./hello
```

Running the program should produce:

```
Hello world from mylib
Adding... 3+4 = 7
OK? = 1
> mylib: hi hi!
hello_cb: hi again!
```
