#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  //test out linked list
  return 0;
}

//linked list
struct ListNode(int data){
  int m_data;
  struct ListNode* m_next = NULL;
  struct ListNode* m_prev = NULL;
}

ListNode* createNode(int data){
  ListNode newNode = (data)malloc(sizeof(ListNode));
  return newNode;
}

void insertAtHead(ListNode** head, int data){
  ListNode* newNode = createNode(data);
  if(*head->m_next == NULL){
    *head->m_next = newNode;
    return;
  }
  
  *head->m_next->m_prev = newNode;
  newNode->m_next = *head->m_next;
  *head->m_next = newNode;
}

void insertAtTail(ListNode** tail, int data){
  ListNode* newNode = createNode(data);
  if(*tail->m_prev == NULL){
    *tail->m_prev = newNode;
    return;
  }
  
  *tail->m_prev->m_next = newNode;
  newNode->m_prev= *tail->m_prev;
  *tail->m_prev = newNode;
}

void printList(ListNode** head){
  while(*head->m_next != NULL){
    printf("%d ", *head->m_data);
  }
}
