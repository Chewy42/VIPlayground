#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  //test out list
  ListNode* head = createNode(10);
  
  insertAtTail(head, 5);
  printList(head);
  
  //for daash group
  //make array and reverse it
  int arr[10]; 
  for(int i = 0; i < 10; i++){
    arr[i] = i;
    printf("%d\n", i);
  }
  int revArr[10];
  int e = -1;
  for(int i = 9; i > -1; i--){
    revArr[++e] = arr[i];
    printf("%d\n", arr[i]);
  }
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

