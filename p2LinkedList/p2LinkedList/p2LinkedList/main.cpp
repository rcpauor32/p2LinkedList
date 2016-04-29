#include "p2LinkedList.h"
#include <stdio.h>

int main() {
	List<int> list;
	list.Push_Back(6);
	list.Push_Front(7);
	list.Push_Back(10);
	list.Push_Front(4);

	printf("%d %d", list.size(), list.first());

	list.Clear();

	getchar();
	return 0;
}