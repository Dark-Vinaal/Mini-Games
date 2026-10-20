import random 

secret_number = random.randint(1, 100)
attempts = 0

print("=" * 60)
print("Welcome to the Number Guessing Game!")
print("I have selected a number between 1 and 100. Can you guess it?")
print("=" * 60)

while True:
    try:
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess < secret_number:
            print("Too low! Try again...")
        elif guess > secret_number:
            print("Too high! Try again...")
        else:
            print("-" * 60)
            print(f"Congratulations! You've guessed the number {secret_number} in {attempts} attempts!")
            break
    except ValueError:
        print("Invalid input. Please enter a number between 1 and 100.")

print("*" * 60)
print("Thank you for playing!")
print("*" * 60)
