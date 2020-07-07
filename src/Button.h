class Button {
    private:
        int _pin;
        int type;
        int raw;
        int _state;
        int lastState;
    public:
    Button(int,int);
    bool check();
    bool down();
};