package main

import (
	"fmt"
	"math/rand"
)

func main() {
	number := rand.Intn(100) + 1
	var guess int

	fmt.Println("==============================")
	fmt.Println("    ***** GUESSING GAME *****")
	fmt.Println("==============================")

	for {
		fmt.Print("Guess a number (1-100): ")
		fmt.Scan(&guess)

		if guess < number {
			fmt.Println("Too Low!")
		} else if guess > number {
			fmt.Println("Too High!")
		} else {
			fmt.Println("***** Correct! You Win! *****")
			break
		}
	}
}