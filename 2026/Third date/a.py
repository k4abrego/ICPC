import math
from typing import Counter

t = int(input())

def permutations(n,k,s):
    c = Counter((s*(k // n)))

    maximisimo = max(n, c[c.most_common()[0][1]]) + 1

    # factorN = set(range(0, n+1, 1))
    # factorsS = set()

    # for i in c.items():
    #     factorsS.add(range(i[1]))
    
    # factorsN = factorsN.difference(factorsS)

    # bigFact = 1
    # for n in factorsN:
    #     bigFact *= n

    
     
    #maximo = c[c.most_common]

    facts = [1]
    for i in range(1, maximisimo + 1):
        facts.append(i * facts[i - 1])
        
    abajo = 1
    # print(maximisimo)
    for i in c.items():
        # print(i[1])
        abajo *= facts[i[1]];
    
 
    return  facts[n] / abajo
    


for i in range(t):
    n,k = input().split(' ')
    n = int(n)
    k = int(k)
    s = input()
    sperm = int(permutations(n,k,s))

    print(sperm)


