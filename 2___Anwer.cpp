// 3. Program to check whether a number is  even or odd:


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