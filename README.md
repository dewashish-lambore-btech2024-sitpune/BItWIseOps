
# C++ Experiment 4: Understanding and Using Bitwise Operators

---

## Aim

- Explore the use of basic bitwise operators.
- Learn how to set and reset specific bits in a given number.

---

## Tool Used

- Visual Studio Code (VS Code)

---

## Objectives

- Use bitwise operators such as AND, OR, XOR, NOT, left shift, and right shift.
- Grasp the techniques behind manipulating individual bits by setting and resetting them.

---

## Theory

### What Are Bitwise Operators?

Bitwise operators directly manipulate the binary representation of integers. Each bit is processed individually, unlike arithmetic or logical operators which operate on entire values. These operators are critical in areas like embedded systems, cryptography, and memory-efficient programming.

### Common Bitwise Operators

- AND (`&`): Results in 1 only if both bits are 1.
- OR (`|`): Results in 1 if at least one bit is 1.
- XOR (`^`): Results in 1 if only one of the bits is 1.
- NOT (`~`): Inverts bits; zeros become ones and vice versa.
- Left Shift (`<<`): Moves bits left, effectively multiplying by 2 for each shift.
- Right Shift (`>>`): Moves bits right, effectively dividing by 2 for each shift.

### Importance of Bitwise Operators in C++

- **Speed and Optimization:** Bitwise operations are highly efficient, often used in performance-critical code such as drivers and game engines.
- **Memory Efficiency:** They enable packing multiple flags into a single integer, saving memory.
- **Hardware Interaction:** Essential for direct control over hardware registers and microcontrollers.
- **Flags and Masks:** Facilitate easy toggling and checking of individual bits to manage settings or statuses.
- **Data Processing:** Foundational in encryption, compression, graphics manipulation, and permission handling.
- **Mathematical Optimization:** Shift operations provide a fast alternative to multiplication and division by powers of two.

---

### Setting and Resetting Bits

In many systems, changing one specific bit without altering others is essential:

- **Setting a bit** means turning a particular bit to 1, no matter its previous value. This is achieved by creating a mask with a 1 shifted to the bit's position and combining it with the number using OR.
  
- **Resetting a bit** means turning a particular bit to 0. A mask with a 1 at the bit position is created, inverted, and then combined with the number using AND to clear that bit.

These techniques are widely used for toggling features, controlling hardware, or optimizing memory use.

---

## Program Description

The program is divided into two parts:

- **Part 1:** Demonstrates how standard bitwise operations behave on two given numbers.
- **Part 2:** Shows how to set or reset specific bits at user-specified positions using bitwise manipulation.

Results are displayed in decimal format to make the changes clear.

---

## Concepts Applied

- Bitwise operations for logical manipulation at the bit level.
- Techniques to selectively set or clear bits within an integer.

---

## Sample Output

- **Setting and Resetting Bits:**
  - Input a number and a bit position to set; then input another number and a bit position to reset.
  - Outputs the resulting numbers after bit manipulation.

- **Bitwise Operations on Two Numbers:**
  - Takes two integers.
  - Shows the result of AND, OR, XOR, left shift, right shift, and NOT operations.

---

This experiment highlights how bitwise operators enable low-level, efficient control over data and hardware.
