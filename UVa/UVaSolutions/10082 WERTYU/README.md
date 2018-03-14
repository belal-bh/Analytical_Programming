# [10082 WERTYU](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1023)

## Easy Problem
  Map input string to output string using key and val array given bellow:
  ```
    int  key[101]={'1','2','3','4','5','6','7','8','9','0','-','=','W','E','R','T','Y','U','I','O','P','[',']','\\','S','D','F','G','H','J','K','L',';','\'','X','C','V','B','N','M',',','.','/',' '};
    char val[101]={'`','1','2','3','4','5','6','7','8','9','0','-','Q','W','E','R','T','Y','U','I','O','P','[', ']','A','S','D','F','G','H','J','K','L', ';','Z','X','C','V','B','N','M',',','.',' '};
    // be carefull about \ and ' characters. \ => '\\' and ' => '\''
    
    char k[110];  // There is no value above 100, so size of k is 101
    for(int i=0; i<=100; i++){
        k[(int)key[i]]=val[i];
    }
  ```
  And if input string ```s``` then 
  ```
    for(int i=0; i<s.size(); i++){
            printf("%c",k[(int)s[i]]);
     }
  ```
  
  
  This was my solution. You can solve it other way. 
  ### Happy programming :)
