'''
Name: Andrew Paris Boske
Course: COMPSC.230
Prof. Name: Dr. Omar X
Assignment (e.g. Homework # or Exam #): Lab 3
Program Name: coneVolumeAPB
Program brief description: calculator for a cone
'''
print('Welcome to ConeCalculatorTM\nPlease input the following:')
height = float(input('Enter your height: '))
radius = float(input('Enter your radius: '))
pi = 3.14

volume = float((1/3) * pi * (radius ** 2) * height)

print('The volume of your cone is: ',volume)
print('Thanks for using ConeCalculatorTM')