#!/usr/bin/python3

largest_palaindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i + j
        if str(product) == str(product)[::-1] and product > largest_palaindrome:
            largest_palaindrome = product

with open("102-result", "w") as file:
    file.write(str(largest_palaindrome))
