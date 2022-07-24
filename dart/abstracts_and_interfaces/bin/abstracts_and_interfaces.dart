abstract class Animal {
  void breathe(); // an abstract method
  void makeNoise() => print('Making animal noises'); // regular method
}

class Comedian extends Person implements IsFunny {
  Comedian(String name, String nationality) : super(name, nationality);

  @override
  void makePeopleLaugh() {
    print('Comedian making people laugh');
  }
}

abstract class IsFunny {
  void makePeopleLaugh();
}

class TVShow implements IsFunny {
  String name;

  @override
  void makePeopleLaugh() {
    print('TV show is funny and makes people laugh');
  }
}

class Person implements Animal {
  String name, nationality;

  Person(this.name, this.nationality);

  @override
  void breathe() {
    print('breather through nostrils');
  }

  @override
  void makeNoise() {
    print('person shouting!');
  }

  @override
  String toString() {
    return '$name $nationality';
  }
}

void main(List<String> arguments) {
  // abstract class can't be created here
  var jenny = Person('Jenny', 'Jamaican');
  print(jenny.toString());
}
