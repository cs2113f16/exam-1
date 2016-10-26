
public class Palindrome {
  
  public static boolean isPalindrome(String s) {
    // YOUR CODE HERE
    return true;
  }
  
  public static void main(String args[]) {
    // DO NOT MODIFY THIS CODE
    String hello = "hello";
    String racecar = "racecar";
    String bonus = "Satan oscillate my metallic sonatas";
    
    if(isPalindrome(hello)) {
      System.out.println("ERROR: hello is not be a palindrome");
    }
    else {
      System.out.println("Correct: hello is not be a palindrome");
    }
    
    if(isPalindrome(racecar)) {
      System.out.println("Correct: racecar is a palindrome");
    }
    else {
      System.out.println("Error: racecar is a palindrome");
    }
    
    if(isPalindrome(bonus)) {
      System.out.println("BONUS! Achievement Unlocked!");
    }
    else {
      System.out.println("No bonus points");
    }
  }
}