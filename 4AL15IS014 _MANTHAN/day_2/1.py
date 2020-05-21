#program to delete a node from the end of the Circular Linked List

class Node:    
    def __init__(self,data):    
        self.data = data;    
        self.next = None;    
     
class CreateList:    
  
    def __init__(self):    
        self.head = Node(None);    
        self.tail = Node(None);    
        self.head.next = self.tail;    
        self.tail.next = self.head;    
            
    def add(self,data):    
        newNode = Node(data);    
        #Checks if the list is empty.    
        if self.head.data is None:    
             
            self.head = newNode;    
            self.tail = newNode;    
            newNode.next = self.head;    
        else:    
               
            self.tail.next = newNode;    
            
            self.tail = newNode;    
            #Since, it is circular linked list tail will point to head.    
            self.tail.next = self.head;    
        
     
    def deleteEnd(self):    
            
        if(self.head == None):    
            return;    
        else:    
            
            if(self.head != self.tail ):    
                current = self.head;    
                #Loop will iterate till the second last element as current.next is pointing to tail    
                while(current.next != self.tail):    
                    current = current.next;    
                   
                self.tail = current;    
                   
                self.tail.next = self.head;    
            else:    
                self.head = self.tail = None;    
                
     
    def display(self):    
        current = self.head;    
        if self.head is None:    
            print("List is empty");    
            return;    
        else:    
               
            print(current.data),    
            while(current.next != self.head):    
                current = current.next;    
                print(current.data),    
            print("\n");    
     
class CircularLinkedList:    
    cl = CreateList();    
       
    cl.add(1);    
    cl.add(2);    
    cl.add(3);    
    cl.add(4);    
       
    print("Original List:");    
    cl.display();    
    while(cl.head != None):    
        cl.deleteEnd();    
        
        print("Updated List:");    
        cl.display();   