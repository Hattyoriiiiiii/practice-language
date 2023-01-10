using System;

class User {
    public string name = "me";
    public void SayHi() {
        Console.WriteLine($"Hi, {name}");
    }
}


class MyApp {
    static void Main() {
        User user = new User();
        user.SayHi();
        Console.WriteLine(user.name);
    }
}