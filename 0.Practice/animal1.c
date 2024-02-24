                                    #include<stdio.h>

                                    typedef struct {
                                        int age;
                                        char name[50];
                                    } Animal;

                                    void setInfo(Animal* dog) {
                                        //(*dog).age = 5;
                                        dog->age = 5;
                                        dog->name = "dfkn";
                                    }

                                    void getInfo(Animal* dog) {

                                        //printf("%d", (*dog).age);
                                        printf("%d", dog->age);
                                        printf("%s", dog->name);
                                    }

                                    int main() {

                                        Animal dog;

                                        setInfo(&dog);

                                        getInfo(&dog);

                                        return 0;
                                    }