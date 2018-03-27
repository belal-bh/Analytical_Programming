# [11827 Maximum GCD](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2927)


## Easy Problem

This is easy problem but have some problem with input data.
> Each test case contains M (1 < M < 100) positive
integers that you have to find the maximum of GCD.

Calculating GCD is simple, calling a recursive function:
``` 
  int gcd_(int a,int b){
    if(a==0) return b;
    else return gcd_(b%a,a);
   }
```

Then find maximum GCD of every possible
pair of the given integers.

### Welcome Back ###

Happy Programming :)
