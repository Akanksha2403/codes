//Question 1
package com.akanksha;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter function (+), (-) , (x), (/), (&), (|), (^)");
        String s = sc.nextLine();
        System.out.println("Enter numbers ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int ans = 0;
        if(s.equals("+"))
            ans = a + b;
        else if(s.equals("-"))
            ans = a - b;
        else if(s.equals("x"))
            ans = a * b;
        else if(s.equals("/"))
            ans = a/b;
        else if(s.equals("&"))
            ans = a&b;
        else if(s.equals("|"))
            ans = a|b;
        else if(s.equals("^"))
            ans = a^b;
        System.out.println(ans);
    }
}