# [11877	The Coco-Cola Store](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2999)


## Easy Problem
  Think something like this:
      If N==2 then you can borrow one bottle and get one new coco-cola. But you have to return this bottle after drinking this coco-cola.
      That means if initially N==2 then you can drink only one bottle coco-cola.
      Also think if N<2 then you can not get any coco-cola at all.
      But if N>2 then you have to repete a process until N<2 .
   ```
      The process or algorithm is :
          1. Repete step 2 to 5 untill N<2
          2. If N==2 then N = N + 1
          3. rem = N mod 3
          4. q = N/3
          5. ans = ans + q
          6. N= rem + q
          7. Return ans
   ```
      
        
  So, that's it. 
  
  And happy programming :)
