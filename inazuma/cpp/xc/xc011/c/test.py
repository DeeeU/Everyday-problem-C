import itertools

number = input()
answer = int(number)
length = len(number)

empty = [""] * length
plus = ["+"] * length

results = []
for i in range(2**(length - 1)):
    calc = ""
    for j in range(length - 1):
        calc += number[j]
        if i and 1:
            calc += "+"
        i >>= 1
    f = calc + number[-1]
    results.append(eval(f))
print(sum(results))

