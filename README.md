# 🔢 Number Analyzer Tool

A C++ program that reads a sequence of integers from the user and analyzes them to determine statistics like the number of even, odd, positive, and negative values, along with the minimum and maximum. Input ends when the user enters `0`.

## 📄 Description

This console-based tool allows users to enter as many integers as they like—positive or negative. When the user enters `0`, the program stops and provides a summary analysis of the numbers entered.

The program also handles invalid (non-integer) input gracefully, prompting the user to re-enter a valid number.

## ✨ Features

- ✅ Counts even and odd numbers
- ✅ Counts positive and negative numbers
- ✅ Finds minimum and maximum values
- ✅ Input validation for non-integer entries
- ✅ Simple termination with `0`

## 🚀 How to Use

1. Compile the C++ program
2. Run the executable
3. Enter integers when prompted
4. Enter `0` to stop input and see the analysis
5. View the statistical summary

## 🧾 Example Output

```
Enter integers (0 to stop): 
Enter a number: 5
Enter a number: -3
Enter a number: 8
Enter a number: -2
Enter a number: 0

Analysis Results:
Total numbers entered: 4
Even numbers: 2
Odd numbers: 2
Positive numbers: 2
Negative numbers: 2
Minimum value: -3
Maximum value: 8
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Number-Analyzer-Tool.git
cd age-validator
```

3. From a terminal (in the extracted folder), run:
```
g++ -o analyzer main.cpp
./number-analyzer-tool
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
