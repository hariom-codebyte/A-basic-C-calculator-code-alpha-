# ✨ Basic Calculator

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-0A84FF?style=for-the-badge&logo=c&logoColor=white" alt="C language">
  <img src="https://img.shields.io/badge/CodeAlpha-Internship-5E5CE6?style=for-the-badge" alt="CodeAlpha internship">
  <img src="https://img.shields.io/badge/Status-Complete-30D158?style=for-the-badge" alt="Complete">
</p>

<p align="center"><b>A clean, beginner-friendly calculator built in C.</b><br>
It performs the four essential arithmetic operations through a <code>switch</code> statement.</p>

## Features

- Addition, subtraction, multiplication, and division
- Menu-driven operation selection with `switch case`
- Decimal-number support
- Invalid-input checks
- Division-by-zero protection

## Preview

```text
========================================
         BASIC CALCULATOR PROGRAM
========================================
  1. Addition       (+)
  2. Subtraction    (-)
  3. Multiplication (*)
  4. Division       (/)
----------------------------------------
Select an operation (1-4): 3
Enter the first number: 12.5
Enter the second number: 4

Result: 12.50 * 4.00 = 50.00
```

## Run locally

### Prerequisite

Install a C compiler, such as [GCC](https://gcc.gnu.org/) or MinGW.

### Compile and run

```bash
gcc calculator.c -o calculator
./calculator
```

On Windows Command Prompt:

```bat
gcc calculator.c -o calculator.exe
calculator.exe
```

## Project structure

```text
Basic-Calculator/
├── calculator.c    # Source code
├── README.md       # Project documentation
└── .gitignore
```

## Concepts used

`switch case` · `scanf` · `if` conditions · `double` data type · console input/output

---

Created for the **CodeAlpha C Programming Internship**.
