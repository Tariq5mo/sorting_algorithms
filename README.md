# Sorting Algorithms

## Introduction / Overview

This project contains implementations of various sorting algorithms in C. The project provides hands-on examples of classic and advanced sorting techniques, including:

- Bubble Sort
- Insertion Sort (for arrays and doubly linked lists)
- Selection Sort
- Quick Sort (Lomuto and Hoare partition schemes)
- Shell Sort (Knuth sequence)
- Cocktail Shaker Sort
- Counting Sort
- Merge Sort (top-down)
- Heap Sort
- Radix Sort (LSD)
- Bitonic Sort
- Deck Sorting using qsort

The goal is to reinforce fundamentals, analyze time complexities, and practice algorithmic problem solving.

## Table of Contents

- [Introduction / Overview](#introduction--overview)
- [Table of Contents](#table-of-contents)
- [Features / Functionality](#features--functionality)
- [Installation / Requirements](#installation--requirements)
- [Usage](#usage)
- [Resources / References](#resources--references)
- [Author / Credits](#author--credits)

## Features / Functionality

- Implements several sorting algorithms with real-time output after swaps or merges.
- Uses print functions to display array or list states.
- Provides analysis files (e.g., 0-O, 1-O, etc.) listing Big O notations.
- Demonstrates sorting with both arrays and doubly linked lists.
- Includes an advanced deck sorting function using the C standard library.

## Installation / Requirements

- Environment: Ubuntu 20.04 LTS.
- Compiler: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Coding style: Betty style compliance.
- Allowed editors: vi, vim, emacs.
- All files end with a new line.

## Usage

Compile each sorting algorithm by including the corresponding main and implementation files. For example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```

Similar commands can be used for testing insertion, selection, quick, shell, cocktail, counting, merge, heap, radix, bitonic sorts, and deck sorting. Each algorithm prints the intermediate and final sorted output.

## Resources / References

- Sorting algorithms overview and animations.
- Big O notation explanations.
- CS50 Algorithms by David Malan.
- Various online articles and videos on sorting and algorithm design.

## Author / Credits

Developed by Tariq Omer
GitHub: [https://github.com/Tariq5mo](https://github.com/Tariq5mo)
