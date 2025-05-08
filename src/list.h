#ifndef LIST_H
#define LIST_H

struct entry;
typedef struct entry * pEntry;

struct entry {
	int n;
	pEntry *next;
};

typedef struct {
	pEntry *head;
} List;

#endif // !LIST_H
