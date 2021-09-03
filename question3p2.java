//Question 3
// part b

package com.akanksha;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

class addition {
    int area;
    addition(int length, int breadth)
    {
        area = length*breadth;
    }
}

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        addition ans = new addition(a, b);
        System.out.println(ans.area);
    }
}

