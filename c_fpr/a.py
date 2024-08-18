quantidade_passos = int(input())

if quantidade_passos>0:
  for i in range(quantidade_passos):
    if i>0:
      print(f"Explorador: {i+1} passos")
    else:
      print(f"Explorador: {i+1} passo")
else:
  print("Nenhum passo dado na floresta")
