# [11723	Numbering Roads](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2823)

## Easy Problem :)
  Think when it is imposiblle ?
  Also think maximum unique road name can be possible is N+Nx26.
  So, If R is greater than maximum possible number of unique road name that means R>(N+Nx26) then it's not possible to give unique name using N integers and suffix of 26 alphabet.
  
  Now think if it's possible. Then we have to find the minimum number of suffixes required to name the streets.
  It's easy to discribe the algorithm using simple code.
  So here is the code that count number of suffixes required to name the streets:
  ```
    int suf =0; // suf for number of suffixes
    while(N-R < 0){
      // Possible number of unique street name every new alphabet can be used to name the streets is N.
      suf = suf + 1;
      R = R - N ;
    }
  ```
  That's it.
  
  Happy programming :)
