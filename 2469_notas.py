quant_notas = input()
notas = [int(i) for i in input().split()]

dic = {}
maior = 0
maior_nota = 0

for nota in notas:
    if nota in dic:
        dic[nota] += 1
    else:
        dic[nota] = 1
        
for nota in dic:
    if dic[nota] > maior:
        maior = dic[nota]
        maior_nota = nota
    elif dic[nota] == maior:
        if nota > maior_nota:
            maior_nota = nota
            maior = dic[nota]

print(maior_nota)
        
        

    
    
