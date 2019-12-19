#jogos.py

import forca
import adivinhacao

def escolher_jogos():
    print('forca (1) adivinhacao (2)')

    jogos = int(input("Qual jogo você deseja? "))

    if (jogos == 1) :
        print("Jogando forca!")
        forca.jogar()

    if (jogos == 2) :  
        print("Jogando adivinhação!")
        adivinhacao.jogar()

if (__name__ == '__main__'):
    escolher_jogos()