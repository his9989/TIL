#include<stdio.h>
#include<string.h>

int main(void) {
	char name[10];	// ��ɾ� ����
	char cas;		// ��ɾ� ù ����Ʈ
	int cas_num;	// switch ���� ����

	// input�� ����Ʈ ������ �޾Ƽ� ���� �迭�� ���ڿ��� �ٲٴ� �ڵ� �ۼ��غ���

//	gets(name)�� LoRa �ڵ�
//	int i = 0;
//	while(Serial.available()){
//		buf[i] = Serial.read();
//		i++;
//	}
		
	// while(Serial.�� ����Ǿ� �ִ� ����)
	//		while(Serial.read()){
	//			if(���� ���۸� �ľ��ؼ�, ��ɾ����� Ȯ��)
	//			��ɾ �ƴϸ� cas_num�� �״��
	//			��ɾ�� cas_num�� 5�� �ٲ۴�.
	//			�׸���, LRW���� ���� LRW���� Ȥ�� ��ɾ �ƴ� �� ���� �� �ϳ��� ��ɾ�μ� string�� ����

	gets(name);	// ��ɾ� �Է�

	// cas = buf[0];
	cas = *name;		// ù ����Ʈ ����
	printf("%c\n", cas); // ����Ʈ Ȯ�� �� ���

	cas_num = (int)cas - 48; // ù ����Ʈ�� ���ڷ� ��ȯ
	printf("%d\n", cas_num);	// ����Ʈ Ȯ�� �� ���

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