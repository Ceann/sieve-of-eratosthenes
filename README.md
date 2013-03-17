Sieve of Eratosthenes
=====================
A command-line "utility" for working with prime numbers using the Sieve of Eratosthenes.

Introduction
------------
###What is this?
The Sieve of Eratosthenes is an algorithm for finding all primes within a range of integer
values. The Sieve works by eliminating all multiples of the lowest available prime from
the range, storing the current prime, and then moving to the next prime:

    2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 // A set of integers 2 - 16
    2 3 5 7 9 11 13 15                   // Start with 2
    2 3 5 7 11 13                        // Move on to next available, which is 3
    
Done. Implemented efficiently, the Sieve can calculate millions of primes in a matter of milliseconds.    

This tool was conceived while I was working on some of the hard Project Euler problems.
I would urge you to give that site a go...just don't slack and use this tool for it :)

###How does it work?
Well, at the moment it doesn't. I've written the code for the calculations but have yet
to turn that into any sort of useful command-line tool. It's a work in progress.
