''' Write a function that accepts a single string input and returns the first non-repeated character. '''

char_order = []
ctr = {}
def first_non_repeating_character(str1):
	for c in str1:
		if c in ctr:	
			ctr[c] += 1
		else:
			ctr[c] = 1 
			char_order.append(c)
		for c in char_order:
			if ctr[c] == 1:
				break
	print(c)

str1=input()
first_non_repeating_character(str1)