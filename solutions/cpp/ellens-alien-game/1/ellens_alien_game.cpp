namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
    public:
        int x_coordinate {}, y_coordinate {};
    
        Alien( int x , int y ) : x_coordinate{x},y_coordinate{y} {};

        int get_health() { return health; }

        bool is_alive() {
            return get_health() > 0;
        }
    
        bool hit() {
            if ( health > 0 )
                health--;
            return true;
        }
    
        bool teleport( const int x , const int y ) {
            x_coordinate=x;
            y_coordinate=y;

            return true;
        }

        bool collision_detection(const Alien alien){
            return x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate;
        }
    private:
        int health {3};
    };
    
}  // namespace targets
