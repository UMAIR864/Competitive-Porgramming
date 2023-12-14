	Prime Numbers

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. In simpler terms, it's a number that cannot be evenly divided by any other numbers except 1 and the number itself. For example, 2, 3, 5, and 7 are prime numbers.

	Sieve of Eratosthenes

The Sieve of Eratosthenes is a smart and efficient way to find all prime numbers up to a given limit. Imagine you have a bunch of numbers, and you want to figure out which ones are prime. The Sieve works like this:

	1) Start with all numbers: Begin with a list of numbers up to a certain limit (let's call it N).

	2) Mark multiples: Start with the first prime number, which is 2. Cross out all multiples of 2, as they can't be prime (except 2 itself).

	3) Move to the next unmarked number: Move to the next unmarked number (which is 3), and cross out all multiples of 3.

	4) Repeat: Keep doing this for the next unmarked numbers until you reach the square root of N.

	5) What's left is prime: Now, the numbers that are not crossed out are the prime numbers!
