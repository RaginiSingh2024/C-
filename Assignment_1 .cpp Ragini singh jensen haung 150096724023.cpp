// 1. Program to find maximum between three numbers:


// # Function to find the maximum of three numbers
// def find_max(a, b, c):
//     if a >= b and a >= c:
//         return a
//     elif b >= a and b >= c:
//         return b
//     else:
//         return c

// # Input numbers
// num1 = float(input("Enter first number: "))
// num2 = float(input("Enter second number: "))
// num3 = float(input("Enter third number: "))

// # Display result
// max_num = find_max(num1, num2, num3)
// print(f"The maximum number is: {max_num}")


// 2. Program to check whether a number is negative or positive:


// # Function to check if the number is positive, negative, or zero
// def check_number(num):
//     if num > 0:
//         return "Positive"
//     elif num < 0:
//         return "Negative"
//     else:
//         return "Zero"

// # Input number
// num = float(input("Enter a number: "))

// # Display result
// result = check_number(num)
// print(f"The number is {result}.")


3. Program to check whether a number is  even or odd:


# Function to check if the number is even or odd
def check_even_odd(num):
    if num % 2 == 0:
        return "Even"
    else:
        return "Odd"

# Input number
num = int(input("Enter a number: "))

# Display result
result = check_even_odd(num)
print(f"The number is {result}.")


4. Program to check whether a year is a leap year or not:


# Function to check if the year is a leap year
def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return "Leap Year"
    else:
        return "Not a Leap Year"

# Input year
year = int(input("Enter a year: "))

# Display result
result = is_leap_year(year)
print(f"The year {year} is {result}.")



5. Program to input week number and print week day:
python
Copy code

# Function to get the day of the week based on the week number
def get_week_day(week_num):
    days = ["Invalid", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    if 1 <= week_num <= 7:
        return days[week_num]
    else:
        return "Invalid week number"

# Input week number
week_num = int(input("Enter the week number (1-7): "))

# Display result
result = get_week_day(week_num)
print(f"The day of the week is: {result}")


6. Program to input month number and print the number of days in that month:

# Function to get the number of days in a month
def get_days_in_month(month_num, year):
    # Days in each month for a common year (February will be handled separately)
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    # If the month is February and it's a leap year, adjust days
    if month_num == 2 and is_leap_year(year) == "Leap Year":
        return 29
    else:
        return days_in_month[month_num - 1]

# Input month number and year
month_num = int(input("Enter the month number (1-12): "))
year = int(input("Enter the year: "))

# Display result
days = get_days_in_month(month_num, year)
print(f"Number of days in month {month_num} of year {year} is: {days}")


7. Program to input basic salary and calculate Gross salary based on conditions:
python
Copy code

def calculate_gross_salary(basic_salary):
    if basic_salary <= 10000:
        HRA = 0.20 * basic_salary
        DA = 0.80 * basic_salary
    elif basic_salary <= 20000:
        HRA = 0.25 * basic_salary
        DA = 0.90 * basic_salary
    else:
        HRA = 0.30 * basic_salary
        DA = 0.95 * basic_salary

    gross_salary = basic_salary + HRA + DA
    return gross_salary