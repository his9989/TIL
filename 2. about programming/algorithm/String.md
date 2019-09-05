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
    
* 문자열 초기화 : .claer
  + s.clear();

* 문자열 비교 : .compare
  + s.compare(s2);
  + 사전 순으로 s==s2이면 0, s<s2이면 음수, s>s2이면 양수를 반환
  
* 문자열 비어있는지 확인 : .empty
  + s.empty()
  + 비어있으면 1 반환, 채워져있으면 0 반환
  
* 문자열 자르기 : .erase
  + string s = "ABCDEF";
  + s.erase(0,3);
    - output : DEF

* 특정 문자열 찾기, 그 문자열의 시작위치 반환 : .find
  + int location = s1.find(s2);
    - output : s1에서 s2가 있는 위치 = 1

  + location = s1.find(s2, 2);
	  - output : s2에서 위치2부터 시작해서 s2가 나오는 가장 가까운 위치
	  - s1 = abcd인 경우 output : -1
	  - s1 = abcdbcd인 경우 output : 4
    
* 문자열 변환 : .replace
  + string s = "abc_def";
  + s.replace(4,3,"zzz");
    - output : s -> abc_zzz
    
* 문자열 삽입 : .insert
  + string s = "ABCDEFG";
  + s.insert(2, "zz");
    - output : s -> ABzzCDEF
    
* 문자열 pop, push
  + string s = "ABCDEF";
  + s.pop_back();
  + s.push_back('p');
    - output : s -> ABCDEp
    
* 문자열 길이 : .size, .length
  + string s = "ABCDEF";
  + int size = s.size();
  + int len = s.length();
    - output : size = len = 6
    
* 문자열 할당 메모리 크기 확인 : .capacity
  + string s = "ABCDEF";
  + int capacity = s.capacity();
    - output : size = 6
    - output : capacity = 15
    
* 문자열 할당 메모리 변환 : .reserve
  + string s = "ABCDEF"
  + s.reserve(100);
  + s.reserve(1000);
    - 매개변수는 기존의 capacity보다 길어야 의미가 있다.

#### 파싱

* 문자열 일부분을 문자열로 반환 : .substr
  + string s = "ABCDEF";
  + string s2 = s.substr(4);
    - output : s2 -> EF
  + string s3 = s.substr(1, 3);
    - output : s3 -> BCD
    
* 문자열을 서로 바꾼다
  + string a = "ABCD";
  + string b = "QWER";
  + a.swap(b);
    - output : a->QWER, b->ABCD
