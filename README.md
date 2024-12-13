# std::vector<bool> unexpected behaviour

This repository demonstrates a common issue with the `std::vector<bool>` specialization in C++.  The standard specialization of `std::vector<bool>` often behaves differently than other `std::vector` types because it attempts to optimize memory usage, which can lead to unexpected behavior. 

The example below shows this unexpected behavior when directly accessing the elements using indexing ( `vec[0]`). The solution shows the recommended way to avoid this behavior.

## How to reproduce

1. Clone the repository.
2. Compile and run the `bug.cpp` file using a C++ compiler (like g++).
3. Observe the unexpected output.
4. Replace `bug.cpp` with `bugSolution.cpp` to observe the corrected behaviour

## Solution

Instead of using `std::vector<bool>`, consider using `std::vector<char>` (storing 0 and 1), or `std::vector<int>`, or `std::vector<uint8_t>` for better performance and compatibility with standard vector behaviours.