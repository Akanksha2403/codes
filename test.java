
// Question 2
package com.prabhav;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

class addition {
    int ans = 0;
    addition(int ...a)
    {
        for(int i : a)
        {
            ans += i;
        }
    }
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
        var sc = new Scanner(System.in);

        addition a  = new addition(2, 3, 4);
        System.out.println(a.ans);

    }
}
