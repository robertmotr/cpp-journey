struct mystructure {
    mystructure() {} // constructor
    int x = 0;
    int y = 30;
    int z = 50;

    int returnX(void) {
        return x;
    }
    void setX(int newX) {
        x = newX;
    }
    int returnY(void) {
        return y;
    }
};