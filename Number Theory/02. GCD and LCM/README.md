	GCD (Greatest Common Divisor)

The Greatest Common Divisor, or GCD, of two numbers is the largest number that divides both of them without leaving a remainder. Think of it as finding the biggest number that can evenly go into both of your original numbers.

For example, if you have 8 and 12, the divisors of 8 are 1, 2, 4, and 8, and the divisors of 12 are 1, 2, 3, 4, 6, and 12. The largest number that appears in both lists is 4, so the GCD of 8 and 12 is 4.

	Euclid's Algorithm for GCD

Euclid, a clever mathematician from ancient Greece, came up with a neat way to find the GCD of two numbers. Here's how it works:

	1) Start with two numbers: Let's call them 'a' and 'b'.

	2) Divide and repeat: Divide the larger number by the smaller one. Then replace the larger number with the smaller one and the smaller one with the remainder. Keep doing this until the remainder becomes 0.

	3) The last non-zero remainder is the GCD: The GCD is the last non-zero remainder you got. That's it!

For example, let's find the GCD of 48 and 18:

48 ÷ 18 = 2 with a remainder of 12
Now, replace 48 with 18 and 18 with 12
18 ÷ 12 = 1 with a remainder of 6
Again, replace 18 with 12 and 12 with 6
12 ÷ 6 = 2 with no remainder
The last non-zero remainder is 6, so the GCD of 48 and 18 is 6. Euclid's Algorithm is like a systematic way of finding the common factor by repeating the division until you get to the answer.
