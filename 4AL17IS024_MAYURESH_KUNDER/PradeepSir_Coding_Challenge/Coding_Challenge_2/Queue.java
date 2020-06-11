import java.util.*;
class Queue {
    private static int front, rear, capacity;
    private static int queue[];

    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int[capacity];
    }

    static void queueEnqueue(int data)
    {

        if (capacity == rear) {
            System.out.printf("\nQueue is full\n");
            return;
        }

        else {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    static void queueDequeue()
    {

        if (front == rear) {
            System.out.printf("\nQueue is empty\n");
            return;
        }

        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }

            if (rear < capacity)
                queue[rear] = 0;

            rear--;
        }
        return;
    }

    static void queueDisplay()
    {
        int i;
        if (front == rear) {
            System.out.printf("\nQueue is Empty\n");
            return;
        }

        for (i = front; i < rear; i++) {
            System.out.printf(" %d <-- ", queue[i]);
        }
        return;
    }

    static void queueFront()
    {
        if (front == rear) {
            System.out.printf("\nQueue is Empty\n");
            return;
        }
        System.out.printf("\nFront Element is: %d\n", queue[front]);
        return;
    }
}

public class StaticQueueinjava {


    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the queue");
        int size = sc.nextInt();
        Queue q = new Queue(size);
        int item;
        boolean x = true;
        while(x)
        {
            System.out.println("1.Insert");
            System.out.println("2.Delete\n");
            System.out.println("3.Display element at the front\n");
            System.out.println("4.Display all elements of the queue\n");
            System.out.println("5.Quit\n");
            System.out.println("\nEnter your choice : ");
            int choice = sc.nextInt();

            switch(choice)
            {
                case 1:
                    System.out.println("\nInput the element for adding in queue : ");
                    item = sc.nextInt();
                    q.queueEnqueue(item);
                    break;
                case 2:
                    q.queueDequeue();
                    break;
                case 3:
                    System.out.println("Element at the front is ");
                    q.queueFront();
                    break;
                case 4:
                    q.queueDisplay();
                    break;
                case 5:
                    x = false;
                default:
                    System.out.println("Wrong choice");
            }
        }
    }
}