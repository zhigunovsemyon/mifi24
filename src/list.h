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

List list_init();

void list_free(List *);

/*Вставка одного элемента. При ошибке возвращает true*/
bool list_append(List *, int);

/*Вставка массива элементов. При ошибке возвращает true*/
bool list_append_range(List *, int const *, size_t);

#endif // !LIST_H
