/*					Programmeur:			Nathan Comeau
					Date:					6/13/2019
					But:                    Question 1 test 2    
					
	The goal here is to create two lists and merge them using the mergeLists function.
	The function takes the two lists as parameters and takes n to determine at what point in the list they will be merged
	
					
					
					*/

#include <iostream>

using namespace std;

//Structures

struct node
{
	char data;
	node* next;
};

//Prototypes
void displayList(node* first);
void mergeLists(node* destination, node* source, int n);
void destroyList(node*& first);

int main(void)
{
	node* list1 = NULL;
	node* inProcess = NULL;

	list1 = new node;
	list1->data = 'A';
	list1->next = NULL;

	inProcess = list1;

	for (int i = 66; i <= 67; i++)
	{
		inProcess->next = new node;
		inProcess = inProcess->next;
		inProcess->data = (char)i;
	}

	
	inProcess->next = NULL;
	
	displayList(list1);

	node* list2 = NULL;
	node* inProcess2 = NULL;

	list2 = new node;
	list2->data = 'D';
	list2->next = NULL;

	inProcess2 = list2;

	inProcess2->next = new node;
	inProcess2 = inProcess2->next;
	inProcess2->data = 'E';

	inProcess2->next = NULL;

	displayList(list2);

	mergeLists(list1, list2, 1);

	destroyList(list1);
		
	displayList(list1);

	

	getchar();
	return 0;
}

//Definitions

void displayList(node* first) //Displays the given list
{
	if (first == NULL)
	{
		cout << "list empty.";
	}
	else
	{
		for (node* traverse = first; traverse != NULL; traverse = traverse->next)
		{
			cout << traverse->data << " ";
		}

		cout << endl;
	}
}

void mergeLists(node* destination, node* source, int n) //Merges lists starting at node n
{
	if (destination == NULL)
	{
		cout << "Liste 1 empty";
	}
	else if (source == NULL)
	{
		cout << "List 2 empty";
	}
	else if (n <= 0 || n > 3)
	{
		cout << "element doesn't exist";
	}
	else
	{

	}
}

void destroyList(node*& first) //Destroys the given list
{
	node* toDelete = first;

	while (first != NULL)
	{
		toDelete = first;
		first = first->next;
		delete toDelete;
	}
}