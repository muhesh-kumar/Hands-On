class MicroPhone {
  String name;
  String color;
  int model = 34567;

  // the following are two ways to create a same constructor method for a class
  // MicroPhone(String name, String color, int model) {
  //   this.name = name;
  //   this.color = color;
  //   this.model = model;
  // }
  MicroPhone(this.name, this.color, this.model);

  // named constructors
  MicroPhone.initialize() {
    name = 'Blue Yeti';
    model = 13234;
  }

  // getters and setters
  String get getName => name;
  set setName(String value) => name = value;

  void turnOn() {
    print('$name is On!');
  }

  void turnOff() {
    print('$name is Off!');
  }

  void setVolume() {
    print('$name with color : $color volume is up!');
  }

  bool isOn() => true;
  int modelNumber() => model;
}

void main(List<String> arguments) {
  // print('Hello world!');
  // var mic = MicroPhone(); //use this if the constructor is not defined
  // mic.name = 'Blue Yeti';
  // mic.color = 'Silver Gray';
  // mic.model = 1234;
  // print(mic);
  // print(mic.color);

  // mic.turnOn();
  // mic.turnOff();
  // mic.setVolume();

  // print(mic.isOn());
  // print(mic.modelNumber());

  var mic2 = MicroPhone('abc', 'yellow', 123);
  print(mic2.name);
  print(mic2.color);
  print(mic2.model);

  var mic3 = MicroPhone.initialize(); // using a named constructor
  print(mic3.name);
  print(mic3.model);

  mic2.setName = 'new name';
  print(mic2.getName);
}
