// Writted By @MosFazli

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String[] a = new String[n];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.next();
            if (a[i].length() > 10) {
                System.out.print(a[i].charAt(0));
                System.out.print(a[i].length() - 2);
                System.out.println(a[i].charAt(a[i].length() - 1));
            } else {
                System.out.println(a[i]);
            }
        }

    }
}
