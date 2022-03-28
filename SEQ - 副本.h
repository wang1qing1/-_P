#pragma once

#include<stdio.h>
#include<stdlib.h>
typedef int SListdataType;
typedef struct SlistNode
{
	SListdataType data;
	struct SlistNode* next;
}SlistNode;
void SlistPrintf(SlistNode* phead);

void SListpushback(SlistNode** phead, SListdataType num);

SlistNode* BuySListNode(SListdataType x);

void SListpophback(SlistNode** pphead);