using System;

class MyApp {
    static void SayHi(string name, int age = 23) {
        Console.WriteLine($"Hi! {name} ({age})");
    }

    // static string SayHi() {
    //     return "Hi!";
    // }

    static string SayHi() => "hi!";

    static void Main () {
        // Console.WriteLine(SayHi());
        SayHi("Tom", 30);
        SayHi("Bob");
        SayHi(age: 26, name: "Steve");
    }
}