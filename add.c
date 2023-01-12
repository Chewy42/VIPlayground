#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int num1, num2, sum;
 scanf("Please enter two numbers: %d %d", num1, num2);
  sum = num1 + num2;
  printf("The sum is: %d\n");
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

}

