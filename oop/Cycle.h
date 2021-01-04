// testing out classes in cpp
class Cycle {
    public:
        Cycle() {}
        int wheels = 2;
        int weight_kg = 20;

        int getWheels() {
            return wheels;
        }
        int getWeight() {
            return weight_kg;
        }
        void setWheels(int new_wheels) {
            wheels = new_wheels;
        }
        void setWeight(int new_weight) {
            weight_kg = new_weight;
        }
        void changeSomething(int newSomething) {
            something = newSomething;
        }

    private:
        int something = 200;
};