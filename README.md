# CIS-165 Lab 4: C++ Averages and Ocean-Level Projections

## Program Plans

### average.cpp
I planned to store five numbers in separate double variables. The program adds the five numbers to calculate the sum, divides the sum by 5 to calculate the average, and displays both results.

### ocean_levels.cpp
I planned to use a named constant for the annual ocean-level rise of 1.5 millimeters. The program multiplies this rate by 5, 7, and 10 years and displays each projected rise in millimeters.

## How to Compile and Run

Compile and run the average program:

```bash
g++ -std=c++17 -Wall -Wextra average.cpp -o average
./average
```

Compile and run the ocean-level program:

```bash
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
./ocean_levels
```

## Testing

| Program and test | Values used | Expected results |
|---|---|---|
| Average: assigned values | 28, 32, 37, 24, 33 | Sum: 154; Average: 30.8 |
| Average: changed values | 10, 15, 20, 25, 31 | Sum: 101; Average: 20.2 |
| Ocean: assigned rate | 1.5 mm per year | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm |
| Ocean: changed rate | 2.3 mm per year | 5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm |

## Program Explanations

### Average Program
The program uses double variables because they can store decimal values. It adds all five numbers to get the sum of 154. Then it divides the sum by 5 because there are five numbers, producing an average of 30.8. Calculating the sum first makes it possible to use that result to calculate the average.

### Ocean-Level Program
The program multiplies the annual rise by the number of years to find each projection. The named constant ANNUAL_RISE represents the annual rate and makes the program easier to update consistently. Separate variables store the calculations before they are displayed, which keeps the calculations and output statements organized.

## Testing Notes
The programs were tested using the assigned values and changed values. The final versions should use the assigned values: 28, 32, 37, 24, and 33 in average.cpp, and an annual rise of 1.5 millimeters in ocean_levels.cpp.

## AI Assistance
ChatGPT helped me understand the assignment, plan the programs, and review the calculations and testing process. I used the C++ compiler in Terminal to build and run the programs. I checked the program outputs against the expected mathematical results. This process helped me practice using variables, constants, arithmetic operations, output statements, and compiler commands.
