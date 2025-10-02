import random
a = random.randint(0,500)
i = 1
while i>0:
    b = int(input("Enter your guess: "))
    if a>b:
        print("Hint: Fly High")
    elif a<b:
        print("Hint: Go Low")
    else:
        print(f" You guessed correctly!!! \n Hooray! \n You Won in {i} attempts!")
        break
    i +=1

f = open("HiScore.txt", "r")
HS = f.read()
f.close()
if int(HS)<i:
    print(f"You couldn't beat the old hi-score of {int(HS)}")
elif int(HS) == i:
    print(f" You got it in the same number of attempts as the hi-score! \n Almost there!")
else:
    f = open("HiScore.txt", "w")
    print(f" Congratulations! You beat the old hi-score. \n New hi-score is {i}")
    f.write(str(i))
    f.close()
