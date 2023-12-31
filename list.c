#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) { 

assert(l != NULL); 

int counter = 0; 

node *p = l; 


while(p->next != NULL){ // loop that runs as long as the current node, is not the last. 
  p = p->next; // set the current node to the next node 
  counter++; // increment counter by one for each repetition of the loop 
}

  return counter; 

}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) { 
    printf("%d, ", p->data);
    p = p->next; // go to the next node in the linked list. 
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list


assert(l != NULL);
int largestValue = 0; // initialize largest value as 0 
node *p = l->next; 


while(p->next != NULL){ // loop that runs as long as the current node is not the last node. 
  
  if(p->data > largestValue){ // check if the data stored by the current node, is larger than the largest value 
    largestValue = p->data; // if yes, change the largest value to the data stored by the current node. 
  }


  p = p->next; // next node 
  
}

  return largestValue; 

}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  return 0;
}

#endif
