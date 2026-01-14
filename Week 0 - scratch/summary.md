# CS50x — Week 0  
## Introduction to Computer Science

---

## 1. The real purpose of CS50

CS50 is not just a programming course.  
Its main goal is to teach **how to think**, **how to solve problems**, and **how to structure solutions**.

Programming is a consequence of this learning, not the final goal.

The course aims to build a strong foundation that allows students to:
- learn new languages on their own in the future
- understand what is happening “under the hood”
- use modern tools (including AI) consciously and effectively

---

## 2. What is Computer Science

Computer Science is the **study of information**:
- how to represent it
- how to store it
- how to process it
- how to transform it into something useful

Computers are simply tools that manipulate information automatically.

---

## 3. Computational Thinking

Computational thinking is the application of ideas from computer science
to solve problems in general, not only “computer problems”.

It involves:
- breaking large problems into smaller ones
- thinking in clear and repeatable steps
- creating systematic and logical solutions

---

## 4. The basic structure of a problem

Every problem can be modeled as:

- **Input**: initial data
- **Processing**: the algorithm (the “black box”)
- **Output**: the final result

This structure is behind almost all existing software.

---

## 5. Algorithms

An algorithm is:
- a finite sequence
- of well-defined steps
- to solve a specific problem

Regardless of the language used—  
Scratch, C, Python, or any other—everything ultimately becomes an algorithm.

---

## 6. How computers work: bits

Computers do not understand:
- words
- images
- sounds

They understand only **two states**:
- `0` → off
- `1` → on

These states are called **bits**.

---

## 7. Number systems

### Base 10 (decimal)
- The system we use every day
- Digits from 0 to 9

### Base 2 (binary)
- The system used by computers
- Digits only 0 and 1

The logic is the same; what changes are the values assigned to each position.

---

## 8. Bits, bytes, and limits

- **8 bits = 1 byte**
- One byte can represent **256 values (0–255)**

This explains:
- early color limits (256 colors)
- file format restrictions
- numeric limits in older systems

With more bits:
- 32 bits → about 4 billion values
- 64 bits → extremely large numbers

---

## 9. Representing numbers

Bits by themselves have no inherent meaning.

The same binary pattern can represent:
- a number
- a letter
- a color

Everything depends on **context** and **software interpretation**.

---

## 10. Representing text

Letters are represented as numbers.

Example:
- `'A'` → 65
- `'B'` → 66

Computers never store letters directly—only numbers.

---

## 11. Representing colors

Colors are represented by numbers, commonly using the RGB model:
- Red
- Green
- Blue

Each component usually ranges from 0 to 255.

---

## 12. Representing images

Images are:
- grids (matrices)
- of pixels
- where each pixel has a color represented by numbers

---

## 13. Representing videos

Videos are:
- sequences of images
- displayed rapidly (e.g., 30 images per second)

Motion is an illusion caused by fast display.

---

## 14. Representing audio

Sounds can be represented numerically using characteristics such as:
- frequency (pitch)
- duration
- amplitude (volume)

Thus, music is also converted into bits.

---

## 15. Instructions are also numbers

Not only data, but **instructions** are represented by bits.

Processor manufacturers define binary patterns that mean:
- add
- subtract
- move data
- print to the screen

---

## 16. From binary to programming languages

Programming directly in binary is impractical.

That is why languages such as:
- Assembly
- C
- Python

were created.

A **compiler** is a program that translates a language closer to humans
into a language closer to machines.

---

## 17. Abstraction

Abstraction is the act of **hiding complex details** to make systems easier to use.

Example:
- you write code in Python
- Python is implemented in C
- C is translated into machine code

You do not need to understand every level to be productive,
but knowing they exist is essential.

---

## 18. Scratch as an introductory tool

Scratch is a visual programming language created by MIT.

It is used in CS50 because it:
- eliminates syntax issues
- focuses on fundamental concepts
- allows quick creation of visual and interactive programs

Despite being visual, Scratch contains the same logical building blocks
found in professional programming languages.

---

## 19. Fundamental programming concepts

### Functions
- actions
- verbs
- reusable blocks of code

### Conditionals
- decisions
- different paths (if / else)

### Booleans
- true or false
- yes or no

### Loops
- repetition of actions

### Variables
- data storage
- example: score

---

## 20. Solving problems in small steps

Large programs do not appear all at once.

They are built from:
- small problems
- small solutions
- incremental progress

This approach reduces errors and improves understanding.

---

## 21. Artificial Intelligence in CS50

AI is presented as a **support tool**, not a replacement for thinking.

CS50 encourages the use of:
- CS50 AI
- the “virtual rubber duck”

The goal is to help students think and reach solutions,
not to provide ready-made answers.

---

## 22. Algorithm Efficiency and Complexity (Intuitive Introduction)

In computer science, it is not enough for an algorithm to simply work.
It is also important to consider **how efficient** it is.

Two algorithms may solve the same problem but require a very different
number of steps to do so.

Efficiency is often discussed in terms of:
- how many steps an algorithm takes
- how this number grows as the input size increases

In Week 0, this idea is introduced intuitively, without formal notation.

The key insight is:
> As problems grow larger, inefficient algorithms can become impractical,
> even if they work correctly for small inputs.

This concept lays the foundation for later topics such as:
- searching algorithms
- sorting algorithms
- Big-O notation (introduced in later weeks)

Understanding efficiency early helps students think not only about
*whether* a solution works, but also *how well* it scales.
