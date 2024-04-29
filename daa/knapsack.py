def knapSack(Weight, Vi, Wi, n):
    profitTable = [[0 for x in range(Weight + 1)] for x in range(n + 1)]  # making the matrix
    for i in range(n + 1):
        for w in range(Weight + 1):
            if i == 0 or w == 0:
                profitTable[i][w] = 0
            elif Vi[i - 1] <= w:
                profitTable[i][w] = max(profitTable[i - 1][w], Wi[i - 1] + profitTable[i - 1][w - Vi[i - 1]])
            else:
                profitTable[i][w] = profitTable[i - 1][w]
    return profitTable[n][Weight]

Vi = [10, 40, 30, 50]
Wi = [5, 4, 6, 3]
W = 10
n = len(Wi)
print(knapSack(W, Vi, Wi, n))
