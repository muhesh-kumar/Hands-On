class Location {
  num lat, long;
  Location(this.lat, this.long);

  Location.create(this.lat, this.long);
}

class ElevatedLocation extends Location {
  num elevation;
  ElevatedLocation(num lat, num lang, this.elevation) : super(lat, lang);

  @override
  String toString() {
    var result = '$lat $long $elevation';
    return result;
  }
}

void main(List<String> arguments) {
  var elevated = ElevatedLocation(23.89, -234.98, 19);

  print('location = ${elevated.lat}, ${elevated.long}, ${elevated.elevation}');

  var name = 'Bonni';
  var object = Object();
  object.toString();
  print(object);

  print(elevated.toString());
  print(elevated);
}
