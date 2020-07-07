class Button {
    private:
        int _pin;
        int type;
        int raw;
        int _state;
        int lastState;
        int currentState;
        unsigned long lasttime;
        unsigned long delay = 50;
    public:
    Button(int,int);
    Button(int,int, unsigned long);
    bool check();
    bool down();
    bool debounce();
};