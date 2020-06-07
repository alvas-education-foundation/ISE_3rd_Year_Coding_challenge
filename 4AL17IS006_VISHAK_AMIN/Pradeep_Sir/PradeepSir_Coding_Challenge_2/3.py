import queue


n = int(input("Enter Queue Size : "))
Q = queue.Queue(maxsize=n )

while True:
    choice = int(input("Enter thr Choice\n1.To Insert\n2.To Display\n3.To Delete\n"))

    if choice == 1:
        m = input("Enter thr elem:\n")
        Q.put(m)

    if choice == 2:
        print(list(Q.queue))

    if choice == 3:
        print(Q.get())

    else:
        print("Invalid Choice")
