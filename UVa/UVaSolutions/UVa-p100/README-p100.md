# [UVa 100 - The 3n + 1 problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=121&page=show_problem&problem=36)

---
## About solution
This was solved using reccursive function in c++. The algorithom is very simple and was given in the problem description too.
So, only few things have to be considere that the size of the variable which was used in the reccursive function.
Because ``` 3*n+1 ``` can overflows a 32-bit integer.
So, I kept type of variable ```n``` is ```long long int```.
* **The reccursive function:**
```
 int rec(long long int n, int cy=0){
    if(n==1)
        return cy+1;
    if(n%2==1)
        return rec(3*n+1,cy)+1;
    else
        return rec(n/2,cy)+1;
 }
```
---
## Author
[Md. Belal Hossain](https://github.com/belal-bh)
---
