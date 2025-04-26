# 🔄 Sorting Algorithms C++

Modern C++ implementations of classic sorting algorithms. Contains fundamental sorting techniques like Bubble Sort, Selection Sort, Merge Sort, Bogo Sort, etc. using std::vector and a header/source file structure.

---

## 📘 How Does It Work ?

The core of this project is the `SortingAlgorithms` class, which encapsulates all the sorting methods. This structure not only promotes clear and modular code, but also makes it easy to switch between algorithms with minimal overhead.

All sorting functions operate on `std::vector<int>`, sorting the elements in ascending order (currently). Using `std::vector` simplifies memory management while providing dynamic resizing and intuitive syntax, making it ideal for algorithm demonstrations (See **Useful Resources** for more on `std::vector`).

The following five sorting algorithms are implemented:
- **Bogo Sort**: A highly inefficient algorithm that shuffles the array until it happens to be sorted. Used mostly for educational or comedic purposes.
- **Selection Sort**: Repeatedly finds the minimum element from the unsorted portion and moves it to the corresponding position. Simple but not efficient for large datasets.
- **Bubble Sort**: Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Easy to implement, but slow.
- **Merge Sort**: A classic divide-and-conquer algorithm that splits the list into halves, recursively sorts them, and then merges the sorted halves.
- **Quick Sort**: Another divide-and-conquer algorithm that selects a pivot, partitions the array around it, and recursively sorts the subarrays. Generally faster than Merge Sort in practice.

Each algorithm is defined in a `.cpp` file and declared in a corresponding `.h` header file, following standard C++ project structure. At this stage, all implementations are restricted to the `int` data type, but support for more data types—via C++ templates is planned for future updates.

---

## 💡 Notes

- This project is one of my first real experiences working with actual algorithms in C++, which made it more challenging than expected. However, using `std::vector` definitely helped simplify the implementation and keep things manageable.
- At the moment, all algorithms are limited to working with `std::vector<int>`. I plan to extend the implementation to support more data types and MAYBE more algorithms.
- I’m fully aware that the current code may not be the most efficient in terms of performance or memory usage, but it’s code I understand, can maintain, and continue to build on.
- My experience with algorithms is still limited, but I find the subject genuinely fascinating. I know this project is just the beginning, and I’ll definitely come back to improve, refactor, and optimize as I learn more.

---

## 📚 Useful Resources

- **[C++ Standard Library Reference](https://cplusplus.com/reference/)** - Comprehensive reference for the entire C++ standard library, including containers, algorithms, and utilities.
- **[std::vector Documentation](https://cplusplus.com/reference/vector/vector/)** - In-depth guide to `std::vector`, the dynamic array class used in this project for sorting operations.
- **[Understanding C++ Header Files](https://www.geeksforgeeks.org/header-files-in-c-c-with-examples/)** - A beginner-friendly explanation of how header files work in C++ and how to use them effectively.
