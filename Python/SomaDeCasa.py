n = int(input(""))
casas = []
for i in range(n):
    casas.append(int(input("")))
k = int(input(""))
set_casas = set(casas)
for casa in casas:
    x = k-casa
    if x in set_casas:
        print(f"{casa} {x}")
        break