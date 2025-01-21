'''
Name: Andrew Paris Boske
Course: COMPSC.230
Prof. Name: Dr. Omar X
Assignment (e.g. Homework # or Exam #): Lab 3
Program Name: sumAndSquareAPB
Program brief description: adding values if they're different and squaring the sum if the same
'''
print('Welcome to MathFunTM\nPlease input the following: ')
input1 = float(input('Please submit your first number to "add": '))
input2 = float(input('Please submit your second number to "add": '))

result = 0
if input1 == input2: 
    result = (input1 + input2) ** 2
    print('Your numbers have been squared!')
else:
    result = (input1 + input2)

print('Your has been added up to ',result)