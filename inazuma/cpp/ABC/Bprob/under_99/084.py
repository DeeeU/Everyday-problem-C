ab = list(map(int, input().split()))
s = input()

if s[ab[0]] != '-':
    print("No")
    exit(0)

# print(type(s[3]))

for i in range(0,ab[0]):
    for j in range(10):
        if s[i] == str(j):
            break
        elif j == 9:
            print("No")
            exit(0)
for i in range(ab[0]+1,ab[0] + ab[1] + 2):
    for j in range(10):
        if s[i] == str(j):
            break
        elif j == 9:
            print("No")
            exit(0)

print("Yes")
