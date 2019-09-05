#include<stdio.h>
#include<string.h>

int main(void) {
	char name[10];	// 명령어 저장
	char cas;		// 명령어 첫 바이트
	int cas_num;	// switch 구문 조건

	// input을 바이트 단위로 받아서 문자 배열을 문자열로 바꾸는 코드 작성해보기

//	gets(name)의 LoRa 코드
//	int i = 0;
//	while(Serial.available()){
//		buf[i] = Serial.read();
//		i++;
//	}
		
	// while(Serial.가 연결되어 있는 동안)
	//		while(Serial.read()){
	//			if(이전 버퍼를 파악해서, 명령어인지 확인)
	//			명령어가 아니면 cas_num을 그대로
	//			명령어면 cas_num을 5로 바꾼다.
	//			그리고, LRW부터 다음 LRW까지 혹은 명령어가 아닌 곳 까지 를 하나의 명령어로서 string에 저장

	gets(name);	// 명령어 입력

	// cas = buf[0];
	cas = *name;		// 첫 바이트 저장
	printf("%c\n", cas); // 바이트 확인 차 출력

	cas_num = (int)cas - 48; // 첫 바이트를 숫자로 변환
	printf("%d\n", cas_num);	// 바이트 확인 차 출력

	switch (cas_num) {
	case 1: printf("65byte print"); break;
	case 2: printf("66byte print"); break;
	case 3: printf("3rd print"); break;
	default: 
		// Serial2.write(name);
		printf("%s", name);
	}
	return 0;
}