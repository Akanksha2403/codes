//part c

package com.akanksha;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.Scanner;

class addition {
    double volume;
    addition(double radius)
    {
        volume = radius*radius*Math.PI;
    }
}

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        double r = sc.nextInt();

        addition ans = new addition(r);
        System.out.println(ans.volume);
    }
}
