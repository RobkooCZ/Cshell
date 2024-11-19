# SHELL IN C
- so this is a funny project of mine to practice my low level programming, pointers and other stuff.

# HOW TO RUN THE CODE

## Prerequisites
- Ensure you have GCC installed on your Windows system. You can install it via [MinGW](http://www.mingw.org/).

## Steps

1. **Open Command Prompt**
    - Press `Win + R`, type `cmd`, and press `Enter`.

2. **Navigate to Your Code Directory**
    - Use the `cd` command to navigate to your code directory:
      ```sh
      cd /c/Coding/C/shell
      ```

3. **Compile Your C Code**
    - Use the `gcc` command to compile the code.:
      ```sh
      gcc main.c header.c -o output_executable
      ```

4. **Run the Compiled Program**
    - Execute the compiled program by typing:
      ```sh
      ./output_executable.exe
      ```

## Example

Assuming your C file is named `main.c` and the header file `header.c`:

```sh
gcc main.c header.c -o main
./main.exe
```

That's it! You have successfully compiled and run your C code using GCC on Windows.