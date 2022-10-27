v = []
aux = []

while True:
    N, K, M = [int(x) for x in input().split()]
    if N == 0 and K == 0 and M == 0:
        break
    
    e = 0
    f = N - 1
    aux.clear()
    for i in range(0, N):
        v.append(i+1)
    c = 0

    while c < N:
        i = K
        while i > 0:
            if v[e] > 0:
                i-=1
            if i == 0:
                a = e
            e = (e + 1) % N

        i = M
        while i > 0:
            if(v[f] > 0):
                i -= 1
            if i == 0:
                b = f
            f = (f + N - 1) % N

        if c > 0:
            aux.append(",")

        if a != b:
            aux.append("%3d"%v[a])
            aux.append("%3d"%v[b])
            c += 2
        else:
            aux.append("%3d"%v[a])
            c += 1

        v[a] = 0
        v[b] = 0
    v.clear()
    for i in aux:
        print(i, end="")
    print()