/*
	(C) OOMusou 2008 http://oomusou.cnblogs.com
	
	Filename    : DS_linked_list_simple.c
	Compiler    : Visual C++ 8.0
	Description : Demo how to use malloc for linked list
	Release     : 03/22/2008 1.0

*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 #define SLEN 255
 
 struct list {
   int  no;
   char name[SLEN];
   struct list *next;
 };
 /*
	linked list����¦�N�Ostruct�A�ҥH���إߤ@�Ӧۭq��struct���O�A�]��linked list�O�astruct���p�_�ӡA�ҥH�̫�n�h�@��struct pointer���V�U�@��struct�C
 */
 
 int main(){
	int no;
	char s[255];
	
	struct list *head    = NULL;
	struct list *current = NULL;
	struct list *prev    = NULL;
	/*
		�إ�linked list�̰򥻻ݭn�T�ӫ��СAhead ���V linked list ���Ĥ@�� struct�Acurrent ���V�ثe��إߪ� struct�Aprev �h���V�e�@�� struct�A�ت��b���V�U�@�� struct�A��󥼨ϥΪ� pointer�A�@�߫��w�� NULL�A�o�O�@�Ӧn�� coding style�A�i�H�ǥѧP�_�O�_��NULL�P�_�� pointer �O�_�Q�ϥΡC
	*/
	   
	while(1){
		printf("No. = ");
		scanf("%d", &no);
		 
		if (no == 0)
			break;
	   
		printf("Name = ");
		scanf("%s", s);
		 
		current = (struct list *)malloc(sizeof(struct list));
		if(current == NULL)
			exit(EXIT_FAILURE);
		
		current->next = NULL;
		/*
			�C���s��ơA�ݭn�إߤ@�ӷs�� struct �ɡA�N�� malloc() �n�@���O����A�ѩ� malloc() �Ǧ^���O void *�A�ҥH�n����૬�� struct list *�C�� malloc() �ä��O�@�w�|���\�A�Y�O���餣���ɡA���M�|���ѡA�ҥH�����P�_�O�_�Ǧ^ NULL�C�ѩ�@�ӷs�� node�A�@�w�O linked list �̫�@�� node�A�ҥH�N current->next �� null�C
		*/
		current->no = no;
		strncpy(current->name, s, SLEN -1);
		current->name[SLEN -1] = '\0';
		/*
			�����N��J����ƶ�i struct�A�ܩ󬰤���n�� strncpy() �Ӥ��� strcpy() �O?���M strcpy() �]�i�H�A�� strncpy() ����w���A�Y��J���r��j�p�W�L struct �ҩw�q���r��j�p�A�h�|�u���� struct �ұ������r��j�p�A�Ӥ��|�]���䤣��'\0'�ӳy���{�����~�C
		*/
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		/*
			�P�_�Y�O�Ĥ@�� node�A�h�N�ثe�� node �� head�A�Y���O�Ĥ@�� node�A�h�N�e�@�� node ���V�ثe�� node�A���� linked list ���s���C�̫�N�ثe�� node ���e�@�� node�A�H�ƫ��V�U�@�� node�C
		*/
		prev = current;
	}
	// display linked list
	current = head;
	while(current != NULL){
		printf("No. = %d, Name = %s\n", current->no, current->name);
		current = current->next;
	}
	/*
		�n���s��� linked list�A�ҥH�N���ЦA�׫��V�Ĥ@�� node�A�C����ܤ@�� node ��A�N���V�U�@�� node�A������� NULL ����C
	*/
	// free linked list
	current = head;
	while(current != NULL){
		prev = current;
		current = current->next;
		free(prev);
	}
	/*
		�ѩ� malloc() �O�N�O�����b heap�A�Ӥ��O��b stack�A�ҥH�ä��|�H�� function ������������A�����n��ʨϥ� free() ����O����A�_�h�|�y�� memory leak�C
	*/
	return 0;
}