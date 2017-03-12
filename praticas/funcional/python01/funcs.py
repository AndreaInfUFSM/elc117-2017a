def doubleMe(x):
   return x**2

def isEven(x):
   return x%2 == 0

def isOdd(x):
   return not isEven(x)

def bmi(w,h):
   return w/h**2

def bmiTell(bmi):
   if bmi <= 18.5: 
      return 'underweight'
   elif bmi <= 25.0:
      return 'normal weight'
   elif bmi <= 30.0:
      return 'overweight'
   else:
      return 'obesity'

def isVowel(c):
   return c in 'aeiouAEIOU'


# Esta funcao vai gerar erro em tempo de execucao
def main():
   print(doubleMe(9))
   print(doubleMe(4+1))
   print(doubleMe('a'))
   print(isEven(8))
   print(isOdd(8.1))
   print(bmiTell(bmi(65,1.70)))
   print(bmiTell(65,1.70))
   
