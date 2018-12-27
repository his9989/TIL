### 자료형 변환
* 주로 사용하는 헤더
  + #include<iostream>
  + #include<sstream>
  + #include<string>
  + #include<cstdio>

#### 1. int를 convert

* int to char
  + 연산 사용 (문자 내용을 그대로 int형으로 변환)
	<code>
	
		int i=6;
		char c;
		c = '0'+i;
	
	</code>
	
  + 아스키코드로 변환
  	<code>
		
		int j=65;
		char a = j;
		// a = A
		
	</code>

  + 알파벳 26개
  	- 48->0
	- 57->9
   	- 65->A
	- 90->Z
	- 97->a
	- 122->z

* int to string
  + stream 사용 (#include<sstream>)
  	<code>
	
		int num = 0;
		cin >> num;
		ostringstream ostr;
		ostr << num;
		string numTostr = ostr.str();
		int len = numTostr.length();
	
	</code>

#### 2. char를 convert

* char to int
  + 연산 사용
  	<code>
		
		char cnum;
		cin>>cnum;
		int num = cnum-0;
		
	</code>

  + atoi() 사용
  	<code>
	
		char a[] = "1234";
		// a[0] = 1, a[1] = 2, a[2] = 3, a[3] = 4
		int i = atoi(a);
		// i = 1234
	
	</code>
	
  + 아스키코드로 변환
  	<code>
		
		char a = '0';
		int j=a;
		// j = 48
		
	</code>

  + 알파벳 26개
  	- 0->48
	- 9->57
   	- A->65
	- Z->90
	- a->97
	- z->122
	
* char to string

  + 강제 형변환
  	<code>
	
		string input;
		cin >> input;
		char * temp;
		temp = (char *)input.c_str();
		
	<code>
	
	- input : hello 일 때, 출력결과
	- cout << temp << ", " << input << "\n"; 	-> hello, hello
	- cout << temp[0] << ", " << temp[1];		-> h, e

  + char[] to string
      	<code>
	
		char ch[] = "hello nice to meet you";
		
		// way 1. output : hello
		string str(ch, ch+5);
		
		// way 2. output : ello
		string str(ch+1, ch+5);
		
		// way 3. output : hello nice to meet you
		string str(ch, size(ch));
	
		// way 4. output : hello nice to meet you
		string str(begin(ch), end(ch));
		
	</code>

#### 3. string를 convert

* string to int, float, double
  + cstdio 사용 (#include<cstio>), (stoi, stof, stod)
	<code>
	
		string str = "64";
		int i = stoi(str);
		float f = stof(str);
		double d = stod(str);
		printf("%d %.2f %.2f", i, f, d);

		istringstream(str) >> i;
		istringstream(str) >> f;
		istringstream(str) >> d;
		printf("%d %.2f %.2f", i, f, d);

	</code>

---

[보류]
	
* int to int_array

* int_array to int

* char to string

* string to char

* string to char_array

* char to char_array

* char_array to char
