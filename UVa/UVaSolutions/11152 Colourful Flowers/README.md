# [11152 Colourful Flowers](http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2093)

## Geometry Problem

Calculate the area of triangle:
> s=(a+b+c)/2;

> Tar=sqrt((s*(s-a)*(s-b)*(s-c)));

Calculate the area of middle circle:
> Mar=pi*pow((Tar/s),2);

Calculate the area of violets:
> Tar=Tar-Mar;

Calculate the radias of big circle:
> R=(a*b*c)/(sqrt(((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))));

And finally calculate the area of sunflowers:
> Bar=(pi*pow(R,2))-(Tar+Mar);

That's all.

### Welcome Back ###
Happy programming :)
