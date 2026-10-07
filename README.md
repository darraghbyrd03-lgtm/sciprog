# sciprog
Darragh's sciprog git assignment repo


# Practical 02

sum.c shows floating point error in summations in c. If we want more accurate answers we can use doubles, but these take longer for computation. It performs the loop from 0->1000 and then from 1000->0.
sum.c is compiled with gcc sum.c -o 'executable_name'
conversion.c converts an integer into a binary, lists the number of binary digits to write it and lists the binary digits. must compile using gcc conversion.c -lm -o 'executable_name'. Math library requires linking. 


#Practical 03

trapezoidal_rule.c calculates the integral of a function allowing us to find the area under a line bounded between two points. It does this for tan(x) between 0 and pi/3. The answer is outputted and compared to the actual answer of log(2).
Compile with gcc trapezoidal_rule.c -lm -o 'executable_name'.

