# push_swap

The push_swap project involves sorting a random unordered array of numbers using only the given instructions while aiming to minimize the number of instructions used.

## Description

In this project, you are provided with two stacks named `a` and `b`. At the beginning:
- Stack `a` contains a random amount of negative and/or positive numbers that cannot be duplicated.
- Stack `b` is empty.

The goal is to sort numbers in ascending order into stack `a`. You have the following operations at your disposal:
- `sa` (swap a): Swap the first 2 elements at the top of stack `a`. Do nothing if there is only one or no elements.
- `sb` (swap b): Swap the first 2 elements at the top of stack `b`. Do nothing if there is only one or no elements.
- `ss`: Execute `sa` and `sb` simultaneously.
- `pa` (push a): Take the first element at the top of stack `b` and put it at the top of stack `a`. Do nothing if `b` is empty.
- `pb` (push b): Take the first element at the top of stack `a` and put it at the top of stack `b`. Do nothing if `a` is empty.
- `ra` (rotate a): Shift up all elements of stack `a` by 1. The first element becomes the last one.
- `rb` (rotate b): Shift up all elements of stack `b` by 1. The first element becomes the last one.
- `rr`: Execute `ra` and `rb` simultaneously.
- `rra` (reverse rotate a): Shift down all elements of stack `a` by 1. The last element becomes the first one.
- `rrb` (reverse rotate b): Shift down all elements of stack `b` by 1. The last element becomes the first one.
- `rrr`: Execute `rra` and `rrb` simultaneously.

## Skills Acquired

- Implementation of a sorting algorithm for stacks.
- Optimization techniques to minimize the number of instructions used in sorting.
