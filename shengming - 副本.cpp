
#include"SEQ.h"

void SlistPrintf(SlistNode* phead)//��ӡ����
{
	SlistNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

SlistNode* BuySListNode(SListdataType x)//���ٽ�㣻x ����洢�����ݣ�
{
	//���ӽ���ʱ�򣬽����һ���ṹ�壬������һ���ṹ�����͵�ָ�룬��һ�����ݴ洢������
	//��������ռ��ʱ��Ҫ����һ���ڵ�Ĵ�С��
	SlistNode* newNode = (SlistNode*)malloc(sizeof(SlistNode));
	if (newNode == NULL)//�ж��Ƿ񿪱ٳɹ���
	{
		printf("����ʧ�ܣ�");
		exit(-1);
	}
	newNode->data = x;//��㿪�ٳɹ��󣬽��������� x������ ata��
	newNode->next = NULL;//�����ӵĽ��Ҳ�����һ����㣬��Ҫ���ڵ�����Ľṹ��ָ���ÿգ�
	return newNode;
}

void SListpushback(SlistNode** pphead, SListdataType x)//β�������ݣ�
{
	SlistNode* newNode = BuySListNode(x);
	if (*pphead == NULL)//�����*ppheadΪ�գ�����ζ�������һ�������ǿգ�ֱ������һ�����
	{
		*pphead = BuySListNode(x);//�������Ľڵ�ĵ�ַ��ֵ��*pphead��
	}
	else//�����һ����㲻�ǿ�
	{
		SlistNode* tail = *pphead;
		while (tail->next != NULL)//�ҵ����һ����㣻
		{
			tail = tail->next;
		}
		tail->next = newNode;//�ҵ����һ�����֮��,�����һ���������Ľṹ��ָ�룬��ֵΪ�����ӵĽڵ�ĵ�ַ��
	}
}

void SListpophback(SlistNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SlistNode* prev = NULL;
		SlistNode* tail = *pphead;
		while (tail != NULL)
		{
			prev = tail;
			tail =tail->next;
		}
		free(tail);
		prev->next = NULL;

	}
}



