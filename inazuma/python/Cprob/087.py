n = int(input())
massA = input().split()
massB = input().split()

# print(n)
# print(massA)

# print(massB)
total = []

for i in range(0,n+1):
    total.append(0)

    # print(total)

    for i in range(0,n):
        for j in range(0,n):
            if i < j:
                total[i] += int(massA[j])
            # elif(i == j):
            #     total[i] += int(massA[j])
                # total[i] += int(massB[j])
            else:
                total[0] += int(massB[j])



print(total)
print(max(total))
