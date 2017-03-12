import operator

def cpfDV(cpf):
   expr = sum(map(operator.mul, cpf, range(len(cpf)+1,1,-1)))%11
   return 0 if expr < 2 else 11-expr

def cpfDV1(cpf):
   expr = sum(map(operator.mul, cpf, range(10,1,-1)))%11
   return 0 if expr < 2 else 11-expr
   
def cpfDV2(cpf):
   print(cpf[:10])
   expr = sum(map(operator.mul, cpf[:10], range(11,1,-1)))%11
   return 0 if expr < 2 else 11-expr
   
   
def cpfValid(cpf):
   dv1 = cpfDV1(cpf)
   dv2 = cpfDV2(cpf[:9]+[dv1])
   return dv1 == cpf[9] and dv2 == cpf[10]
   
def newCpfValid(cpf):
   dv1 = cpfDV(cpf[:9])
   dv2 = cpfDV(cpf[:9]+[dv1])
   return dv1 == cpf[9] and dv2 == cpf[10]
