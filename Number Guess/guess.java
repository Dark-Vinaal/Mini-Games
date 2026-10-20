import java.util.Scanner;
import java.util.Random;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();

        int number = r.nextInt(100) + 1;
        int guess;

        System.out.println("==============================");
        System.out.println("    ***** GUESSING GAME *****");
        System.out.println("==============================");

        while (true) {
            System.out.print("Guess a number (1-100): ");
            guess = sc.nextInt();

            if (guess < number)
                System.out.println("Too Low!");
            else if (guess > number)
                System.out.println("Too High!");
            else {
                System.out.println("***** Correct! You Win! *****");
                break;
            }
        }
    }
}