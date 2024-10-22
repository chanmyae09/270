namespace CS270 {

//Constructor
template<class T>
forward_list<T>::forward_list() {
  head = NULL;
}

//Check if list is empty
template<class T>
bool forward_list<T>::empty() {
  return head == NULL;
}

//Add an item
template<class T>
void forward_list<T>::push_front(const T& v) {
  Node* first = new Node(v);
  first->next = head;
  head = first;
}

template<class T>
void pop_front() {
  Node* toDelete = head;
  head = head->next;
  delete toDelete;
}

//Remove all copies of const T& val
template<class T>
void forward_list<T>::remove(const T& val) {
  Node* current = head;
  Node* prev = NULL; //No previous node at beginning
  while(current != NULL) {
    if (current->val == val) {
      if (prev != NULL) {
        prev->next = current->next;
      } else {
        head = current->next;
      }
      delete current;
      if (prev != NULL) {
        current = prev->next;
      } else {
        current = head;
      }
    } else {
      prev = current;
      current = current->next;
    }
  }
}

}
