N = int(input())
vetor = []
pi = 0
cont = 0

vetor = [int(x) for x in input().split()]

if N != 1:
    if vetor[0] > vetor[1]:
        for i in range(1, N-1):
            if(i % 2 != 0):
                if(not(vetor[i] < vetor[i+1])):
                    pi = 1
            else:
                if(not(vetor[i] > vetor[i+1])):
                    pi = 1
    elif vetor[0] < vetor[1]:
        for i in range(1, N-1):
            if(i % 2 != 0):
                if(not(vetor[i] > vetor[i+1])):
                    pi = 1
            else:
                if(not(vetor[i] < vetor[i+1])):
                    pi = 1
    else:
        pi = 1

    if pi == 0:
        print("1")
    else:
        print("0")
else:
    print("0")