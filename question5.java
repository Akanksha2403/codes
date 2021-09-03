
// Question 5


package com.akanksha;
import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // write your code here
        int z = 8;
        int a = z++ + ++z;
        int b = z-- + --z;
        int c = z++;
        int d = ++z;
        int e = z--;
        int f = --z;
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println("d = " + d);
        System.out.println("e = " + e);
        System.out.println("f = " + f);
    }
}
