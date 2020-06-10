import sys

def finding_numbers(numbers):
  final_count = 0
  max_count = 0
  for s in set(numbers):
    lower_bound, upper_bound = 0, 0
    for n in numbers:
      if n == s:
        lower_bound += 1
        upper_bound += 1
      elif n == s - 1:
        lower_bound += 1
      elif n == s + 1:
        upper_bound += 1
    max_count = lower_bound if lower_bound > upper_bound else upper_bound
    final_count = max_count if max_count > final_count else final_count
  return final_count

def main():
  n = int(input().strip())
  numbers = list(map(int, input().strip().split(' ')))
  print(finding_numbers(numbers))

if __name__ == '__main__':
  main()