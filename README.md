# 📅 Calendar Generator in C
------------------------------

A clean, logic-driven C application built to provide months in a year based on the input from the user. This project uses the basic concepts of C and mathematical logic. 
It was developed during my semester break to transition from writing basic classroom programs to creating independent, functional applications.

---

##  Key Highlights

* **User Input:** Generates all 12 months for any year you type in.
* **Leap Years:** Automatically changes February to 29 days when needed.
* **Clean Layout:** Aligns all dates neatly into perfect columns in the terminal.
  
##  Concepts Applied
To build this project, I brought together several foundational programming concepts:
* **Arrays:** Used to store the fixed number of days for each of the 12 months.
* **Pointers:** Used to efficiently manage and display the names of the months.
* **Loops & Switch Cases:** Essential for driving the core calendar matrix and processing user selections.
* **Functions:** Broken down into specific functions to handle calculations separately .

##  Core Functions Used
The logic of this application is completely divided using specific functions to handle calculations and display separately:

* **`main()`**
  * Controls the program flow, takes user input, and coordinates the calendar generation.
* **`dayofweek()`**
  * Calculates the exact starting weekday for any given date.
* **`monthname()`**
  * Returns or displays the correct name of the month being processed.
* **`No_days()`**
  * Determines the total number of days in a specific month, adjusting for leap years.
* **`calendar()`**
  * Loops through the dates and prints the formatted calendar grid neatly in the terminal.
    
##  How to Run
Even for simple terminal projects, standard documentation helps keep things organized! You can run this project locally using any C compiler:

1. Open your terminal in the project directory.
2. Compile the source file:
   ```bash
   gcc project.c -o calendar
