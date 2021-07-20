class Person {
  String name, lastName, nationality;
  int age;

  void showName() {
    print(name);
  }

  void sayHello() => print('Hello');
  void showNationality() => print('American');
}

class Bonni extends Person {
  String profession;

  void showProfession() => print(profession);
  @override
  void showNationality() {
    print('American - Korean');
  }
}

class Paulo extends Person {
  bool playGuitar;

  @override
  void sayHello() {
    print('Ola');
  }

  @override
  void showNationality() {
    print('Mojimbiques');
  }
}

void main(List<String> arguments) {
  print('Hello world!');

  var bonni = Bonni();
  bonni.name = 'Bonni';
  bonni.profession = 'Ballerina';
  bonni.showName();
  bonni.showProfession();

  var paulo = Paulo();
  paulo.name = 'Paulo';
  paulo.age = 32;
  paulo.playGuitar = true;

  paulo.showName();
  print(paulo.age);

  paulo.sayHello();

  bonni.showNationality();
  paulo.showNationality();
}
