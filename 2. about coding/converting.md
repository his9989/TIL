### cstdio 사용 안하는 방법

#### 1. int를 convert

* int to char
  + 연산 사용
	<code>
	
		int i=6;
		char c;
		c = '0'+i;
	
	</code>

#### 2. char를 convert

* char to int
  + 연산 사용
  	<code>
		
		char cnum;
		cin>>cnum;
		int num = cnum-0;
		
	</code>

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

#### 3. string을 convert

---

### cstdio 사용하는 방법
	
#### 1. int를 convert

* int to string
  + stream 사용
  	<code>
	
		int num = 0;
		cin >> num;
		std::ostringstream ostr;
		ostr << num;
		std::string numTostr = ostr.str();
		int len = numTostr.length();
	
	</code>
	
#### 2. char를 convert

#### 3. string을 convert

* string to int, float, double

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
	
* int to int_array

* int_array to int

* char to string

* string to char

* string to char_array

* char to char_array

* char_array to char
