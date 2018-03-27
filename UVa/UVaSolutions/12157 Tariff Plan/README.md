# [12157 Tariff Plan](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3309)


## Easy Problem

In *__Mile__* package
> If you
talk for 29 seconds or less, you will be charged with 10 cents. If you talk for
30 to 59 seconds, you will be charged with 20 cents and so on.

In *__Juice__* package
> If you
talk for 59 seconds or less, you will be charged with 15 cents. Similarly, if you
talk for 60 seconds to 119 seconds, you will be charged with 30 cents and so
on.

Each call duration is an integer in the range [1, 2000].

That means call duration will not be 0 second.

So , the calculation is :
> Mile_cost = 10( X/30 + 1 )

> Juice_cost = 15( X/60 + 1 )

Where X is the call duration in seconds.

Then compare which is cheap package.

That's it.

### Welcome Back ###

Happy programming :)
