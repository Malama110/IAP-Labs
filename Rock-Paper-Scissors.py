one=str(input())
two=str(input())
if one != two:
    if one=="paper" and two=="rock":
        print("Player 1 wins")
    elif one=="rock" and two=="scissors":
        print("Player 1 wins")
    elif one=="scissors" and two=="paper":
        print("Player 1 wins")
    elif two=="paper" and one=="rock":
        print("Player 2 wins")
    elif two=="rock" and one=="scissors":
        print("Player 2 wins")
    elif two=="scissors" and one=="paper":
        print("Player 2 wins")
else:
    print("Tie")
    
