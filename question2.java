// Question 2

package com.akanksha;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

class addition {
    int ans = 0;
    addition(int a, int b) {
        ans = a + b;
    }
    addition(int a, int b, int c) {
        ans = a + b + c;
    }
    addition(int a, int b, int c, int d) {
        ans = a + b + c + d;
    }
}

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        box ans = new box(a, b, c);
        System.out.println(ans.volume);
    }
}
