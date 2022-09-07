void moveFirstNodeToEnd(struct Node* head) {
   if (head == NULL || head->next == NULL) {
      return;
   }
   struct Node* secondLastNode = head;
   struct Node* lastNode = head;
   while (lastNode->next != NULL) {
      secondLastNode = lastNode;
      lastNode = lastNode->next;
   }
   secondLastNode->next = NULL;
   lastNode->next = head;
   head = lastNode;
}
