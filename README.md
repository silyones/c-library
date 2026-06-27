# C Library Example

A simple C project demonstrating how to create and use a custom library in C. This project shows how to separate functions into reusable source and header files, making code cleaner, modular, and easier to maintain.

## Project Structure

```text
c-library/
│
├── main.c      # Main program
├── mylib.c     # Library function definitions
├── mylib.h     # Library function declarations
├── .gitignore
└── README.md
```

## Features

* Addition of two numbers
* Subtraction of two numbers
* Multiplication of two numbers
* Division of two numbers

## Getting Started

### Prerequisites

Make sure you have GCC installed on your system.

Check if GCC is installed:

```bash
gcc --version
```

## Compilation

Compile the project using:

```bash
gcc main.c mylib.c -o app
```

## Running the Program

### On Windows

```bash
app
```

### On Linux/macOS

```bash
./app
```

## Why Use Libraries?

Libraries allow developers to:

* Reuse code across multiple programs
* Keep source files organized
* Improve readability and maintainability
* Reduce duplicate code

This project is a beginner-friendly introduction to creating and using custom libraries in C.

