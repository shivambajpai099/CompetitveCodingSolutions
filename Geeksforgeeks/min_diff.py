#code
test = int(input())
for i in range(test):
    n = int(input())
    s = input()
    s = s.split()
    l = len(s)
    mini = 100000
    s.sort()
    for j in range(l-1):
        if abs(int(s[j]) - int(s[j+1])) < mini:
            mini = abs(int(s[j]) - int(s[j+1]))
    print(mini)
        
