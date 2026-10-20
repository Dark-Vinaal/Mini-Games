import 'dart:io';
import 'dart:math';

void main() {
  int number = Random().nextInt(100) + 1;

  print("==============================");
  print("    ***** GUESSING GAME *****");
  print("==============================");

  while (true) {
    stdout.write("Guess a number (1-100): ");
    int guess = int.parse(stdin.readLineSync()!);

    if (guess < number)
      print("Too Low!");
    else if (guess > number)
      print("Too High!");
    else {
      print("***** Correct! You Win! *****");
      break;
    }
  }
}