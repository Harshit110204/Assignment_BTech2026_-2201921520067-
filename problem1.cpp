class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:

    int get_age(){
        return age;
    }
    void set_age(int age){
        this->age = age;
    }
    string get_first_name(){
        return first_name;
    }
    void set_first_name(string first_name){
        this->first_name = first_name;
    }
    string get_last_name(){
        return last_name;
    }
    void set_last_name(string last_name){
        this->last_name = last_name;
    }
    int get_standard(){
        return standard;
    }
    void set_standard(int standard){
        this->standard = standard;
    }
    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};