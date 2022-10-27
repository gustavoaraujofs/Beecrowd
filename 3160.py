L = [str(x) for x in input().split()]
N = [str(x) for x in input().split()]
S = input()

if S != "nao":
    for i in L:
        if i == S:
            for j in N:
                if j == L[-1]:
                    print(j, end="")
                else:
                    print(j, end=" ")
            if S == L[-1]:
                print(S, end="")
            else:
                print(S, end=" ")
        else:
            if i == L[-1]:
                print(i, end="")
            else:
                print(i, end=" ")
    print()
else:
    L = L + N
    for i in L:
        if i == L[-1]:
            print(i, end="")
        else:
            print(i, end=" ")
    print()