frase = input()
nova = ''

for i in frase:
    if i not in "PQ":
        if i.isspace(): pass
        elif i == 'R': nova += ' '
        elif i in '.,!?': 
            nova = nova[:-1]
            nova += i
        else: nova += i
print(nova)