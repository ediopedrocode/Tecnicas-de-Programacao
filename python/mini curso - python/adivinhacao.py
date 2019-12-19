#adivinhacao.py
import random

def jogar():

    print("------------------------------")
    print("Bem-vindo, tente adivinhar o número secreto.")
    print("------------------------------")

    num = random.randrange(0,101)

    tentativas_total = 3

    for rodada in range(1, tentativas_total+1):

        print("Tentativas {} de {}" .format(rodada, tentativas_total))

        chute = input("Digite um número de 1 a 100: ")
        chute = int(chute)

        igual = chute == num
        maiorq = chute > num
        menorq = chute < num

        if chute<1 or chute>100:
            continue

        if (igual):
            print("ACERTOU!!!!!!")
            break
        elif (maiorq):
            print("Seu chute foi maior!")
        else:
            print("Seu chute foi menor!")

    print(num)

    print("FIM DE JOGO!")

    if (__name__ == '__main__'):
        jogar()