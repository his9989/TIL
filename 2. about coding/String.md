* 문자열 할당 : .assign
  + string s1, s2, s3;
  + s1.assign("ABCDEFG");
    - output : ABCDEFG
  + s2.assign(3, 'a');
    - output : aaa
  + s3.assign(s1, 2, 4);
    - output : CDEF
    - s1의 2부터 2+4까지 (0부터 시작)
    
* 문자열 붙이기 : .append
  + string s1, s2
  + s1.append("ABCDEFG");
    - output : ABCDEFG
  + s1.append(3, 'a');
    - output : ABCDEFGaaa
  + s1.append(s1, 2, 4);
    - output : ABCDEFGaaaCDEF
  + s2.append(s1);
    - output(s2) : ABCDEFGaaaCDEF
  + s2+='x';
    - output(s2) : ABCDEFGaaaCDEFx
    
* 
