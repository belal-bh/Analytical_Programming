# [909A - Generate Login](http://codeforces.com/contest/909/problem/A)

---
## Editorial

The most straightforward solution is to generate all possible logins (by trying all non-empty prefixes of first and last names and combining them) and find the alphabetically earliest of them.

To get a faster solution, several observations are required. First, in the alphabetically earliest login the prefix of the last name is always one letter long; whatever login is generated using two or more letter of the last name, can be shortened further by removing extra letter to get an alphabetically earlier login.

Second, the prefix of the first name should not contain any letter greater than or equal to the first letter of the last name, other than the first letter.

Thus, a better solution is: iterate over letter of the first name, starting with the second one. Once a letter which is greater than or equal to the first letter of the last name is found, stop, and return all letter until this one plus the first letter of the last name. If such a letter is not found, return the whole first name plus the first letter of the last name.

---
## Author
 * Main author [Nickolas's blog](http://codeforces.com/blog/entry/56666)
 * [I'm](https://github.com/belal-bh) just solved this problem
 
 ---
 ## Welcome Back
 Thanks & Happy coding!
