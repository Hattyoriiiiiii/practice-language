using System;

class User {
    public string name;
    public User(string name) {
        this.name = name;
    }

    public virtual void SayHi() {
        Console.WriteLine($"Hi, {name}");
    }
}


class AdminUser: User {
    public AdminUser(string name): base(name) {}
    public void SayHello() {
        Console.WriteLine($"Hello, {name}");
    }

    // 親クラスのメソッドを上書きする
    public override void SayHi() {
        Console.WriteLine($"[admin] Hi, {name}");
    }
}


class MyApp {
    static void Main() {
        User tom = new User("Tom");
        tom.SayHi();
        AdminUser bob = new AdminUser("Bob");
        bob.SayHello();
        bob.SayHi();
    }
}