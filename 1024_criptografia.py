casos = int(input())

for i in range (0, casos):
    linha = input()
    
    message1 = []
    
    for letra in linha:
        if 'a'<= letra <='z' or 'A' <= letra <= 'Z':
            carac = chr(ord(letra) + 3)
            message1.append(carac)
        else:
            message1.append(letra)
            
    message2 = message1[::-1]
    
    meio = len(message2) // 2
    message3 = message2[:meio]
    
    for letra in message2[meio:]:
        messsage3.append(chr(ord(letra) - 1))
        
    print(''. join(message3))
         
         
    


    
