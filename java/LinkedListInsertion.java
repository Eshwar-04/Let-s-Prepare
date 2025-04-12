import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

 class LinkedListInsertion {
    
    static Node insertAtTail(Node head, int data) {
        Node newNode = new Node(data);
        
        if (head == null) {
            return newNode;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        return head;
    }
    static void printList(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data + " ");
            temp = temp.next;
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        Node head = null; 
        for (int i = 0; i < n; i++) {
            int value = s.nextInt();
            head = insertAtTail(head, value);
        }

        printList(head);

        s.close();
    }
}
