# coding=utf-8

#JOAO OCTAVIO BARROS SILVA
#PARADIGMAS 2017-1
#jbarros@inf.ufsm.br

'''1. Defina uma função `addSuffix(suf,nomes)` que retorne a lista de `nomes` com o sufixo `suf` adicionado. Exemplos:
#  ```
#  >>> addSuffix('@inf.ufsm.br',['fulano','beltrano'])
#    ['fulano@inf.ufsm.br', 'beltrano@inf.ufsm.br']
'''

'''def addSuffix(suf, nomes):
 return map(lambda nomes:nomes+suf, nomes)
'''
def addSuffix(suf, nomes):
 return [x+suf for x in nomes]


'''2-Escreva uma função `countShorts(words)`, que receba uma lista de palavras e retorne a quantidade de palavras dessa lista que possuem menos de 5 caracteres.
#  ```
#  >>> t2.countShorts(['lazy','dog','brown','fox'])
#  3
'''

def countShorts(words):
 return len([x for x in words if len(x) < 5])
