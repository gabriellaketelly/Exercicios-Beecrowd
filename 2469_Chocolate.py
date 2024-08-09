divisoes_feitas = int(input())
quant_pedacos = [int(i) for i in input().split()]

soma = 0

for j in range (0,divisoes_feitas):
    soma += quant_pedacos[j]
    
resultado = soma - divisoes_feitas

print(resultado)
    
    

