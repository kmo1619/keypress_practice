#include <stdio.h> //���Ĵٵ� ��ǲ �ƿ�ǲ
#include <conio.h> //Ű�� ���õ� ��Ŭ���

void main() {
	/*char c;
	c = _getch();
	printf("Ű : %d", c);*/

	//while (1) {
	//	//Ű������ ������ �����Ͽ� �������� 0�̿��� ���� �ش�.
	//	if (_kbhit()) {
	//		printf("Ű���� �Է� ����");
	//		break;
	//	}
	//	printf("�Է� �����\n");
	//}

	while (1) {
		char pressKey;
		//Ű�� �ԷµǸ� ����ش�.
		if (_kbhit()) {
			pressKey = _getch();

			switch (pressKey) 
			{
			case 72:
				printf("ȭ��ǥ ���� Ű \n");
				break;
			case 75:
				printf("ȭ��ǥ ���� Ű \n");
				break;
			case 77:
				printf("ȭ��ǥ ������ Ű \n");
				break;
			case 80:
				printf("ȭ��ǥ �Ʒ��� Ű \n");
				break;
			}
		}
	}

}
