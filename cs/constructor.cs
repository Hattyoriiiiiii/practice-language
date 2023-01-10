using System;

class User {
    public string name;

    public User(string name) {
        this.name = name;
    }

    public void SayHi() {
        Console.WriteLine($"Hi, {name}");
    }
}


class MyApp {
    
    static void Main() {
        User tom = new User("Tom");
        tom.SayHi();
    }
}