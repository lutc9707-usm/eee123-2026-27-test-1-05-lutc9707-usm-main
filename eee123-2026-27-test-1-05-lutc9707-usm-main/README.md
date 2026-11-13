# EEE123 - Computer Programming for Engineers
## Test 1 - Question 4 (Set 05)
**Read this whole file before you start.** It is easiest to read on GitHub in your browser.

### Your task
Complete the body of the function `formula()` in `main.cpp`, so that it calculates and **returns** $y$ from the formula below, for an **integer** input $x$ (positive or negative):

```math
y = \frac{3}{5} \cdot \frac{6x^{4} - 9x^{3} - 3x - 8}{\left|9 - x^{3}\right| + \sqrt{4x^{2} + 13}}
```

`main()` is already written for you. It asks for $x$, calls `formula(x)` and prints $y$ with 5 decimal places, again and again until you stop it with **Ctrl+C**.

**Example** (one run of the program):
```
Type an integer value (+/-) for x: 1
-0.69289
Type an integer value (+/-) for x: -3
10.18605
Type an integer value (+/-) for x:
```

### Rules
1. Write your code only inside `formula()`, below `//write your code below`. Do not change the function header `double formula(int x)` or its declaration in `main.hpp`.
2. `formula()` only calculates and **returns** $y$. Do not use `cin` or `cout` inside it.
3. Declare all variables inside `main()` or inside your functions. **Do not use global variables.** You may add more functions (declare them in `main.hpp`).
4. Include the header files you need, e.g. `<cmath>`.
5. **Do not delete or edit** `LICENSE`, `Makefile`, `catch.hpp`, `test1.cpp` to `test7.cpp`, `input1.txt` to `input7.txt`, `output1.txt` to `output7.txt`, `.gitignore`, `.classroom50.yaml` or the `.github` folder. They are needed for marking. **Do not rename your repository.** Your marks are collected by its name. In `main.cpp` and `main.hpp`, do not edit the lines marked `//DO NOT EDIT OR REMOVE`.
6. In VS Code, add `-Wall` and `-Wconversion` to your `tasks.json` so that you see all warnings. Use the G++ compiler only.
7. **Use VS Code. Write, compile and test your code in VS Code on your own computer, then commit and push (Sync) from VS Code. Do not do the task by editing files on the GitHub website. A repository whose commits were all made on the GitHub website will be flagged.** Use your @student.usm.my email for your commits.

### Marks
- There are 7 test files, `test1.cpp` to `test7.cpp`. Each one calls your `formula()` with **101 different values** of $x$ (from `input1.txt` to `input7.txt`) and compares each result with the correct $y$ (in `output1.txt` to `output7.txt`).
- **All 101 results in a test file must be correct to get 2 marks** for that file. Otherwise you get 0.
- The full mark is **14**. You can get 0, 2, 4, …, 14.
- Marks are deducted later for any compiler warnings.

### Before you submit
- Fill in your details below **and** at the top of `main.cpp`.
- Check your answers against the example above, and against a few values in `input1.txt` and `output1.txt` (e.g. the first value of $x$ in `input1.txt` should give the first value of $y$ in `output1.txt`).
- On Linux or macOS, run `make test1` to `make test7` to check your function before you submit.
- After you push, check for the **green tick** ✓ on your repository page. A **red cross** ✗ means some tests failed: click it, then **Details**, and read the first `error:` line or the `FAILED` test (it shows the value of `x`). Fix your code and push again.
- The test closes at **1700**. Only what is pushed to GitHub by then is marked.

### Made a mistake? Start again
If you deleted or broke a file, you may delete this repository and start again, **before 1700**.
1. Click **Settings** at the top of this page. If you do not see it, wait one minute and refresh.
2. Scroll to the bottom and click **Delete this repository**. Follow the steps to confirm.
3. Accept the question again from the eLearn link. You get a new repository with fresh files.
4. Clone the new repository into a **new folder with a different name**. Do not reuse the folder of the old repository.

### Student's details
Declaration: I have read all the instructions above.

**Name**: Write your full-name here\
**USM Email**: abc123@student.usm.my\
**GitHub Username**: abc123\
**Matric No.**: 987654
