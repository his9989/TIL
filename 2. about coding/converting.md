### cstdio 사용 안하는 방법

#### int를 convert

* int to char
  + 연산 사용
	<code>
	
		int i=6;
		char c;
		c = '0'+i;
	
	</code>

#### char를 convert

* char to int
  + 연산 사용
  	<code>
		
		char cnum;
		cin>>cnum;
		int num = cnum-0;
		
	</code>
	

#### string을 convert

---

### cstdio 사용하는 방법
	
#### int를 convert

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
	
#### char를 convert

#### string을 convert

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
