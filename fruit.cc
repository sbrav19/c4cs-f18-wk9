enum Fruits {Orange, Apple, Banana};

class Fruit {
  int fruit;

 public:
  Fruit (int f) {
      fruit = f;
    }
};

int main() {
  Fruit myFruit(Apple);
  return 0;             // line 17                               
}