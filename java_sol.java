import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    if (n <= 1) {
      System.out.println("NO");
      return;
    }
    int[] a = new int[n];
    int mn = Integer.MAX_VALUE;
    for (int i = 0; i < n; i++) {
      a[i] = in.nextInt();
      if (a[i] < mn) {
        mn = a[i];
      }
    }
    int ans = Integer.MAX_VALUE;
    boolean checker = false;
    for (int i = 0; i < n; i++) {
      if (a[i] != mn) {
        ans = Math.min(ans, a[i]);
        checker = true;
      }
    }
    if (checker) {
      System.out.println(ans);
    } else {
      System.out.println("NO");
    }
  }
}
