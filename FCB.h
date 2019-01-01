#pragma once
#include<string>
#include "FileType.h"
#include "Access.h"
#include "FAT.h"
#include <time.h>
const int N  = 4096;

using namespace std;
class FCB {
public:
	string name;//�ļ���
	int nodeId;//�ļ���ʶ��
	FileType type;//�ļ����ͣ�����չ��������
	string path;//�ļ�λ�ã��ļ�������豸�ľ���λ�á�
	int size;//�ļ���С�����ֽڻ��Ϊ��λ���ļ����ȡ�
	Access access;//�ļ��ı�����ʽ��ͨ���ж���д��ִ�еȡ�
	string modifyDate;// �ļ��Ĵ������޸����ڡ�
	FCB *index[N];//������
	FCB *father;//���ڵ�
	FCB();
	~FCB();
	string getTime();//��ȡϵͳʱ��

};