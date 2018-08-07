test = int(input())
for i in range(test):
    n = int(input())
    s = input()
    s = s.split()
    onec = 0
    zerc = 0
    for j in s:
        if int(j) == 1:
            onec +=1
        else:
            zerc +=1
            
    for j in range(zerc):
        print("0 ",end='')
    for j in range(onec):
        print("1 ",end='')
    print()
