# coding=utf-8

#https://github.com/jotavio1945/elc117-2017a/tree/master/trabalhos/t1
#João Octávio Barros Silva, 201230058


#1-Defina uma função somaQuad(x,y) que calcule a soma dos quadrados de dois números x e y.

def somaQuad(x, y): return (x*x) + (y*y)

#2-Crie uma função `hasEqHeads(l1,l2)` que verifique se as listas l1 e l2 possuem o mesmo #primeiro elemento.

def hasEqHeads(l1, l2):
	if(l1[0] == l2[0]): print "são iguais"
	else: print "not iguais"

#3-Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome. Defina uma função auxiliar para ajudar neste exercício.

def aux3(x): return "Sr. " + x
def addSr(lis): return map(aux3, lis)

#4-Crie uma função que receba uma string e retorne o número de espaços nela contidos.  Defina uma #função auxiliar para ajudar neste exercício.

def contaEsp(sent): return sent.count(" ")


#5-Escreva uma função que, dada uma lista de números, calcule 3*n**2 + 2/n + 1 para cada número n da lista. Defina uma função auxiliar para ajudar neste exercício.

def calculaEssaCoisa(n): return (3*n**2 + 2/n + 1)
def ex5(lis): return map(calculaEssaCoisa, lis)

#6-Escreva uma função que, dada uma lista de números, retorne uma lista com apenas os que forem negativos. Defina uma função auxiliar para ajudar neste exercício.

def achaNegativo(x): 
	if x < 0: return x
def ex6(lis): return map(achaNegativo, lis)

#7-Escreva uma função que receba uma lista de números e retorne somente os que estiverem entre 1 e 100, inclusive. Defina uma função auxiliar para ajudar neste exercício.

def achaEntre1e100(x):
	if (x >= 1 and x<= 100): return x
def ex7(lis): return map(achaEntre1e100, lis)

#8-Escreva uma função que receba uma lista de números e retorne somente aqueles que forem pares. Defina uma função auxiliar para ajudar neste exercício.

def achaOsPares(x):
	if x%2 == 0: return x
def ex8(lis): return map(achaOsPares, lis)

#9-Crie uma função `charFound(c,s)` que verifique se o caracter c está contido na string. O resultado deve ser `True` ou `False`. Você não deve usar o operador `in`. Defina uma função auxiliar para ajudar neste exercício.

def charFound(stringg):
	contagem = stringg.count("c")
	if contagem > 0: return "True"
	else: return "False"

