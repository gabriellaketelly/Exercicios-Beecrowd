linha = input().split()
linha2 = input().split()

compativel = 0

for i in range (5):
    if linha[i] != linha2[i]:
        compativel = 1
    else:
        compativel = 0
        break
    
if (compativel == 1):
    print('Y')
else:
    print('N')
