# [UVa 10424 - Love Calculator](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1365)


## Editorial
The problem was easy but need some care taking input. ```You will be given two names. These two names can have white space or some other non-alphabetical
characters like $ & % etc.``` But ```std::cin``` does not take white space.
So, I have used ```std::getline``` function.

I have used a function named ```lol`` which return a digit after processing given name.
In this lol function a prtion (given bellow) basically while loop within a while loop process a maltidigit number and return only one digit number i.e. at first if sum=77 then it return sum=5 after process.
```
while(sum/10!=0){
      int num=sum;
      int tot=0;
      while(num){
          tot+=num%10;
          num/=10;
      }
      sum=tot;
 }
```
You have to think that if there have any ```divide by zerro error!!!```.

Thats all in time :)

## Author
 [Md. Belal Hossain](https://github.com/belal-bh)
 
 
## Welcome back
Share your idea about this problem & happy coding :)

Thanks.
