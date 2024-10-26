#single linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None  
class SLL:
    def __init__(self):
        self.head = None  
l = SLL()
n1 = Node(10)
l.head = n1
n2 = Node(20)
n1.next = n2 
n3=Node(30)
n2.next=n3
current = l.head
while current:
    print(current.data, end=" -> ")
    current = current.next
print("None")
