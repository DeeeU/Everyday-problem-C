while True:
    s1 = input()
    if s1 == '.':
        break
    s2 = input()

    if s1 == s2:
        print("IDENTICAL")
        continue

    s2 = s2.split('"')
    s1 = s1.split('"')
    # print(s1)
    # print(s2)
    count = 0
    isTmp = False
    if s1[0] == '"' and s2[0] == '"':
        isTmp = True

    hoge = True
    for i in range(len(s1)):
        if len(s1) != len(s2):
            print("DIFFERENT")
            hoge = False
            break
        if count > 1:
            print("DIFFERENT")
            hoge = False
            break

        if not isTmp:
            if i % 2 == 0:
                if s1[i] != s2[i]:
                    print("DIFFERENT");
                    hoge = False
                    break
            if i % 2 == 1:
                if s1[i] != s2[i]:
                    count += 1
        else:
            if i+1 % 2 == 0:
                if s1[i] != s2[i]:
                    print("DIFFERENT");
                    hoge = False
                    break
            if i+1 % 2 == 1:
                if s1[i] != s2[i]:
                    count += 1

    if count == 1 and hoge:
        print("CLOSE")
