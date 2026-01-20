# CS50x — Week 1  
## C Programming: Core Concepts (Theory Notes)

---

## 1. Why C in CS50

C is used in CS50 because it is a **low-level language** that exposes how computers actually work.

Learning C helps students:
- understand memory and performance
- be precise about types and operations
- better understand higher-level languages later (Python, JavaScript, etc.)

C forces clarity of thought.

---

## 2. From Scratch to C: Conceptual Shift

In Week 0, Scratch hid many details:
- data types
- memory management
- execution rules

In Week 1, C requires the programmer to be explicit.

This shift is intentional:
- the computer does not guess intentions
- every detail must be clearly defined

---

## 3. Compilation Process

C programs are **compiled**, not interpreted.

Conceptual flow:
1. The programmer writes C code
2. A compiler (e.g., `clang`) translates it into machine code
3. The computer executes the generated binary

This introduces:
- compile-time errors
- the separation between writing code and running it

---

## 4. Program Structure and `main`

Every C program starts execution in the `main` function.

Key ideas:
- execution is sequential
- functions define controlled entry points
- the program runs exactly as written

Understanding `main` reinforces the concept of **execution flow**.

---

## 5. Data Types

In C, every value has an explicit type.

Common types introduced:
- `int` — integers
- `float` / `double` — decimal numbers
- `char` — single characters
- `string` (CS50 library) — sequence of characters
- `bool` — true or false

Types exist to:
- define memory usage
- prevent ambiguity
- enable optimizations

---

## 6. Variables and State

Variables associate names with values.

Important concepts:
- variables have a fixed type
- values can change over time
- variables store **state**

State allows programs to remember information during execution.

---

## 7. Operators and Expressions

C uses explicit operators:
- arithmetic: `+`, `-`, `*`, `/`
- comparison: `==`, `!=`, `<`, `>`
- assignment: `=`

Critical distinction:
- `=` assigns a value
- `==` compares values

This distinction is a common source of bugs.

---

## 8. Conditionals (Decision Making)

Conditionals allow programs to:
- make decisions
- execute different paths

Key idea:
> The computer only does exactly what it is instructed to do.

Conditionals rely on boolean expressions and control program flow.

---

## 9. Booleans and Logic

Boolean values:
- `true`
- `false`

Used for:
- decisions
- validation
- loop control

Boolean logic is the foundation of algorithms and complex systems.

---

## 10. Loops (Repetition)

Loops allow code to run multiple times.

Conceptually:
- repeat while a condition is true
- repeat a fixed number of times

Loops introduce:
- efficiency
- the risk of infinite loops
- the need for clear stopping conditions

---

## 11. Libraries and Abstraction

Functions like `printf` come from libraries.

This reinforces:
- code reuse
- abstraction
- trust in well-defined interfaces

Programmers build on top of existing work rather than starting from scratch.

---

## 12. Input and Output

Useful programs interact with users.

Core model:
- input → data provided to the program
- processing → logic and computation
- output → displayed results

This reinforces the problem-solving model introduced in Week 0.

---

## 13. Precision and Common Errors

C is unforgiving:
- incorrect types
- uninitialized variables
- incorrect comparisons

This teaches:
- attention to detail
- careful reading of compiler errors
- logical debugging

---

## 14. Code Style and Readability

Code is written for humans as well as computers.

Good practices include:
- clear variable names
- consistent indentation
- readable structure

Readable code is easier to maintain, debug, and review.
