using System;

class MyApp {
    
    static void Main() {
        // 領域の確保は"new"で
        // int[] scores = new  int[3];
        // int[] scores = new int[] {10, 20, 40};
        // int[] scores = {10, 20, 40};
        var scores = new[] {10, 20, 40};

        // scores[0] = 10;
        // scores[1] = 20;
        // scores[2] = 40;

        Console.WriteLine(scores[1]);
    }
}