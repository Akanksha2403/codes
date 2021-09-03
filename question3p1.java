// Question 3
// part a
package com.akanksha;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

class box {
    int volume;
    box(int length, int breadth, int height)
    {
        volume = length*breadth*height;
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