# [909B - Segments](http://codeforces.com/contest/909/problem/B)

---
## Editorial

Consider a segment [i, i + 1] of length 1. Clearly, all segments that cover this segment must belong to different layers. To cover it, the left end of the segment must be at one of the points 0, 1, ..., i (i + 1 options), and the right end — at one of the points i + 1, i + 2, ..., N (N - i options). So the number of segments covering [i, i + 1] is equal to Mi = (i + 1)(N - i). The maximum of Mi over all i = 0, ..., N - 1 gives us a lower bound on the number of layers.

Because the problem doesn't require explicit construction, we can make a guess that this bound is exact. max Mi can be found in O(N); alternatively, it can be seen that the maximum is reached for  (for a central segment for odd N or for one of two central segments for even N).

The answer is .

We can also prove this by an explicit construction. Sort all segments in non-decreasing order of their left ends and then in increasing order of their right ends. Try to find a place for each next segment greedily: if i is the left end of current segment, and segment [i, i + 1] is free in some layer, add the current segment to that layer; otherwise, start a new layer with the current segment.

and yes, this is our O(1) problem! :-)

---
## Author
 * Main author [Nickolas's blog](http://codeforces.com/blog/entry/56666)
 * [I've](https://github.com/belal-bh) tried but failed and then just solved this problem following this editorial.
 
 ---
 ## Welcome Back
 Thanks & Happy coding!
