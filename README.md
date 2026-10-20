# sciprog
Darragh's sciprog git assignment repo


# Practical 02

sum.c shows floating point error in summations in c. If we want more accurate answers we can use doubles, but these take longer for computation. It performs the loop from 0->1000 and then from 1000->0.
sum.c is compiled with gcc sum.c -o 'executable_name'
conversion.c converts an integer into a binary, lists the number of binary digits to write it and lists the binary digits. must compile using gcc conversion.c -lm -o 'executable_name'. Math library requires linking. 


# Practical 03

trapezoidal_rule.c calculates the integral of a function allowing us to find the area under a line bounded between two points. It does this for tan(x) between 0 and pi/3. The answer is outputted and compared to the actual answer of log(2).
Compile with gcc trapezoidal_rule.c -lm -o 'executable_name'.

# Practical 04

practical04.c continues with practical 03 using the trapezoidal but uses functions to seperate the different steps of the problem, the given conversion from degrees to radians is not used here as it uses floats and I am using doubles.
Compile with gcc practical04.c -lm -o 'executable_name'.


#Practical 05

Part a of practical05.c calculates the fibonacci sequence based on an input from the user to cap the number of fibonacci numbers that it uses. Limited to 47 due to integer overflow. will break if you try or use n<2.
Part b compares two methods of calculating the arctanh(x) for an array from -0.9 to 0.9 with a step size of 0.01. Takes in a tolerance for the calculation of the function using a geometric series. 
Compile the code with gcc practical05.c -lm -o 'executable_name'.
Input error handling is not considered so if you put a double where it asks for an integer then it will break. 


