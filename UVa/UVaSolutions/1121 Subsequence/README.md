# [1121 Subsequence](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3562)

## Easy Problem
  A sequence of N positive integers (10 < N < 100 000), each of them less than or equal 10000, and
a positive integer S (S < 100 000 000) are given. Write a program to find ```the minimal length of the
subsequence of consecutive elements of the sequence```, the sum of which is greater than or equal to S.

This can be solved many way. I've solved this using ```cumulative sum``` .
But I've got wronge answer two times for a triky mistake. That was the situation ```when sum of all element are less than S```.
And in this situation right answer is ```0```.

That's it.

### Happy Programming :)
