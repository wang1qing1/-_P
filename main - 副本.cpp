
#include"SEQ.h"

int main()
{
	SlistNode *plist = NULL;
	SListpushback(&plist,100);
	SListpushback(&plist,200);
	SListpushback(&plist,300);
	SListpushback(&plist,400);
	SListpushback(&plist,500);
	/*SlistPrintf(plist);*/
	SListpophback(&plist);
	SlistPrintf(plist);
	return 0;
}
