# [UVa 458 - The Decoder](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399)

## Editorial

The problem was supper easy!!! But you have to find out what operation going on decoding the text.

Let's see what's happening!
``` 
 Input  : 1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5

 Output : *CDC is the trademark of the Control Data Corporation.

          char= int       char= int       Difference
          ---------       ----------      --------------
          '1' = 49        '*' = 42        => '1'-'*' = 7
          'J' = 74        'C' = 67        => 'J'-'C' = 7
          'K' = 75        'D' = 68        => 'K'-'D' = 7
          'J' = 74        'C' = 67        => 'J'-'C' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          'p' = 112       'i' = 105       => 'p'-'i' = 7
          'z' = 122       's' = 115       => 'z'-'s' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'o' = 111       'h' = 104       => 'o'-'h' = 7
          'l' = 108       'e' = 101       => 'l'-'e' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'y' = 121       'r' = 114       => 'y'-'r' = 7
          'h' = 104       'a' = 97        => 'h'-'a' = 7
          'k' = 107       'd' = 100       => 'k'-'d' = 7
          'l' = 108       'e' = 101       => 'l'-'e' = 7
          't' = 116       'm' = 109       => 't'-'m' = 7
          'h' = 104       'a' = 97        => 'h'-'a' = 7
          'y' = 121       'r' = 114       => 'y'-'r' = 7
          'r' = 114       'k' = 107       => 'r'-'k' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          'm' = 109       'f' = 102       => 'm'-'f' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'o' = 111       'h' = 104       => 'o'-'h' = 7
          'l' = 108       'e' = 101       => 'l'-'e' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          'J' = 74        'C' = 67        => 'J'-'C' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          'u' = 117       'n' = 110       => 'u'-'n' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'y' = 121       'r' = 114       => 'y'-'r' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          's' = 115       'l' = 108       => 's'-'l' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          'K' = 75        'D' = 68        => 'K'-'D' = 7
          'h' = 104       'a' = 97        => 'h'-'a' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'h' = 104       'a' = 97        => 'h'-'a' = 7
          ''' = 39        ' ' = 32        => '''-' ' = 7
          'J' = 74        'C' = 67        => 'J'-'C' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          'y' = 121       'r' = 114       => 'y'-'r' = 7
          'w' = 119       'p' = 112       => 'w'-'p' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          'y' = 121       'r' = 114       => 'y'-'r' = 7
          'h' = 104       'a' = 97        => 'h'-'a' = 7
          '{' = 123       't' = 116       => '{'-'t' = 7
          'p' = 112       'i' = 105       => 'p'-'i' = 7
          'v' = 118       'o' = 111       => 'v'-'o' = 7
          'u' = 117       'n' = 110       => 'u'-'n' = 7
          '5' = 53        '.' = 46        => '5'-'.' = 7

```
What's ???????????????
Yes!!  a single arithmetic manipulation: ```output_char = input_char - 7 ```.


It's fun!!!


Thats all in time :)

## Author
 [Md. Belal Hossain](https://github.com/belal-bh)
 
 
## Welcome back

Happy coding :)

Thanks.
