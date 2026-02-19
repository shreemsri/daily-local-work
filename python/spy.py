import random

def hide_and_seek():
    rooms = ['kitchen', 'bathroom', 'bedroom', 'garage', 'attic']
    hiding_spot = random.choice(rooms)

    print("Let's play Hide and Seek!")
    print("I'm hiding in one of these rooms:")
    for room in rooms:
        print(f"- {room}")
    print()

    attempts = 3
    while attempts > 0:
        guess = input(f"Guess where I'm hiding ({attempts} attempts left): ").strip().lower()
        if guess == hiding_spot:
            print("🎉 You found me! Good job!")
            break
        elif guess not in rooms:
            print("That’s not even a valid room. Try again!")
        else:
            print("Nope! Not here.")
            attempts -= 1
    else:
        print(f"😢 You lost! I was hiding in the {hiding_spot}.")

# Start the game
if __name__ == "__main__":
    hide_and_seek()