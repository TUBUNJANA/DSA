class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
class LinkList:
    def __init__(self):
        self.head=None
        
    def insertAtBegin(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
        else:
            new_node.next=self.head
            self.head=new_node
    def insertAtEnd(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
        else:
            temp_val=self.head
            while(temp_val.next !=None):
                temp_val=temp_val.next
            temp_val.next=new_node
    
    def insertAtIndex(self,index,data):
        new_node=Node(data)
        index_val=1
        if self.head is None:
            print("The link list doesn't exist!")
        
        elif index==1:
            self.insertAtBegin(data)
        else:
            temp_val=self.head
            while(temp_val != None and index_val+1 != index):
                temp_val=temp_val.next
                index_val += 1
            if temp_val != None:
                new_node.next=temp_val.next
                temp_val.next=new_node
            else:
                 print(f"The given index is not present in list of --> {index_val}")
    def deleteAtBegin(self):
        if self.head is None:
            print("The list doesn't exists!")
        else:
            print(f"Deleted element is :: {self.head.data}")
            self.head = self.head.next
                
    def deleteAtEnd(self):
        if self.head is None:
            print("The list doesn't exists!")
        else:
            temp_head = self.head
            while(temp_head.next != None):
                prev_val = temp_head
                temp_head = temp_head.next
            
            print(f"Deleted element is :: {temp_head.data}")
            prev_val.next = None
    
    def deleteAtIndex(self,index):
        temp_head = self.head
        temp_index=1
        if self.head is None:
            print("The list doesn't exists!")
        elif index == 1:
            self.deleteAtBegin()
            
        else:
            while(temp_head != None and temp_index+1 != index ):
                temp_index += 1
                temp_head = temp_head.next
            if temp_head is None:
                print("The index is not available!")
            else:
                print(f"Deleted element is :: {temp_head.next.data}")
                temp_head_2=temp_head
                temp_head=temp_head.next
                temp_head_2.next = temp_head.next
                
                
    def deleteByValue(self,data):
        temp_head_2=self.head
        temp_head = self.head.next
        if self.head.data is data:
            print("inside ")            
            self.deleteAtBegin()
        else:
            while(temp_head != None and temp_head.data != data ):
                temp_head_2=temp_head
                temp_head=temp_head.next
            if temp_head is None:
                print("Given value is not present in list")
            elif temp_head.next is None:
                self.deleteAtEnd()
            else:
                print(f"Deleted element is :: {temp_head.data}")
                temp_head_2.next = temp_head.next
                
                  
            
    
        
    def printLinkList(self):
            if self.head is None:
                print("The list is empty!")
            else:
                print("The list is -->")
                temp_head=self.head
                while(temp_head!=None):
                    print(temp_head.data)
                    temp_head=temp_head.next
                    
                    
                    
linkl=LinkList()
linkl.insertAtBegin(10)        
linkl.insertAtBegin(20) 
# linkl.insertAtBegin(30) 
linkl.printLinkList()
linkl.deleteByValue(30)
         
linkl.printLinkList()         