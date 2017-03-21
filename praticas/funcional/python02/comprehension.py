import random

def isVowel(c):
   return c in 'aeiouAEIOU'

def simpleSeq(start,n):
   return [x*2+start for x in range(n)]

def cara_ou_coroa():
   return 'cara' if random.randrange(2) == 0 else 'coroa'

def genFloats(start, end, n):
   step = (end-start)/n
   return [start+x*step for x in range(n)]

