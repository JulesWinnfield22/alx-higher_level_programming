#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = 0

if number < 0:
  last_digit = (-1 * last_digit) % 10
else:
  last_digiddt = number % 10

print(f"Last digit of {number} is {last_digit}", end=' ')

if number == 0:
  print("and is 0")
elif number > 5:
  print("and is greater than 5")
elif number < 6 and not 0:
  print("and is less than 6 and not 0")
