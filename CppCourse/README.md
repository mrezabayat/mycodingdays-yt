# C++ Course Example Codes

Welcome to the official repository for the C++ programming course! This repository contains example codes for each video, organized by video number, to help you practice and learn C++ concepts effectively.

## Compiling and Running C++ Files

### Windows (Using MinGW)

1. Download and install MinGW from [MinGW's official website](http://www.mingw.org/).
2. Add the MinGW bin directory to your system's PATH.
3. Open Command Prompt and navigate to the folder containing the desired example code.

```bash
cd path/to/any/example/folder
```

4. Compile the C++ file using the following command:

```bash
g++ filename.cpp -o output.exe
```

5. Run the compiled executable:

```bash
output.exe
```

### macOS and Linux (Using g++)

1. Open Terminal and navigate to the folder containing the desired example code.

```bash
cd path/to/any/example/folder
```

2. Compile the C++ file using the following command:

```bash
g++ filename.cpp -o output
```

3. Run the compiled executable:

```bash
./output
```

### Using Visual Studio Code:

1. Install VSCode: https://code.visualstudio.com/
2. Install the "C/C++" extension by Microsoft.
3. Open the example folder in VSCode.
4. Open the desired `.cpp` file.
5. Press `Ctrl + Shift + B` (Windows/Linux) or `Cmd + Shift + B` (macOS) to build.
6. The executable will be generated in the same folder.
7. Open the integrated terminal in VSCode.
8. Run: `./filename` (macOS and Linux) or `filename.exe` (Windows).

## Contributing

Feel free to contribute more example codes or improvements. Fork the repository, create a new branch, add your codes, and submit a pull request!

## Note

- Make sure you have the respective compiler (MinGW for Windows, g++ for macOS and Linux) installed.
- Replace `filename.cpp` with the actual name of the C++ file you want to compile.
- Replace `output` with the desired name of the compiled output file.

Happy coding!