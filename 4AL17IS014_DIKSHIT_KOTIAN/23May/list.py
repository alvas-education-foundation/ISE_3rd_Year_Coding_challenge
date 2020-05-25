/*You are given two integers x and y . You need to find out the ordered pairs 
( i , j ) , such that ( i + j ) is not equal to n and print them in lexicographic 
order.( 0 <= i <= x ) and ( 0 <= j <= y) */

if __name__ == '__main__':
    x = int(raw_input())
    y = int(raw_input())
    z = int(raw_input())
    n = int(raw_input())
    print [[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a+b+c != n]