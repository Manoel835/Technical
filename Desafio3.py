import json

with open('dados.json') as f:
    data = json.load(f)

menor_valor = float('inf')
maior_valor = float('-inf')
soma = 0
dias_com_faturamento = 0

for registro in data:
    valor = registro['valor']
    if valor > 0:
        if valor < menor_valor:
            menor_valor = valor
        if valor > maior_valor:
            maior_valor = valor
        soma += valor
        dias_com_faturamento += 1

media_mensal = soma / dias_com_faturamento

dias_acima_da_media = sum(1 for registro in data if registro['valor'] > media_mensal)

print(f"Menor valor de faturamento: R$ {menor_valor:.2f}")
print(f"Maior valor de faturamento: R$ {maior_valor:.2f}")
print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")
