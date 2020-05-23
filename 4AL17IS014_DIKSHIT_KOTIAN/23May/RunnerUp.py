/*Given the participants' score sheet for your University Sports Day, 
you are required to find the runner-up score. You are given  scores.
Store them in a list and find the score of the runner-up.*/

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    largest = max(arr)

    for i in range(n):
        if largest == max(arr):
            arr.remove(max(arr))

    print(max(arr))