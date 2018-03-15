# [10696 - f91](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1637)

## Easy and Tricky :)
  If I use reccursive function then probably I'll get TLE.
  Look at the function:
   ```
      * If N<=100 then it will forward to the the number N==101 and finally it call f91(101) that is the second condition (N>=101)
      * If N>=101 then it will return N-10
      
      Here something like this code:
        if(N<=100){
            printf("f91(%u) = %u\n",N,91);
        }
        else{
            printf("f91(%u) = %u\n",N,N-10);
        }
   ```
   
 So easy enough :)
    
      
