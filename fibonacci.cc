#include <iostream>
// So wie es aussieht liegt ein Fehler in der Aufgabenstellung vor, da
// nach der Fibonacci Folge gilt f0 = 0, f1 = 1 und f2 = 1 und nicht f1 = 0 und f2 = 1.
int  fibonacci(int number) {
    // Mit unsigned long long können f0, f1, fi in dem Wertebereich 0 bis 18446744073709551615 liegen.
    unsigned long long f0 = 0, f1 = 1, fi;
    std::cout << f0 << std::endl;
    if (number == 0) return f0; 
    std::cout << f1 << std::endl;
    if (number == 1) return f1;
    
    for (int i = 2; i <= number; i++) {
        fi = f0 + f1; 
        f0 = f1, f1 = fi;
        std::cout << fi << std::endl;
    }
    return fi;
}


int main () {
    int N;
    std::cout << "Geben Sie eine Zahl N ein: ";
    std::cin >> N;


    // Funktionniert jetzt nicht mehr, da fibonacci() für Punkt a) ii) abgeändert wurde.
    //std::cout << fibonacci(N);


    fibonacci(N);
 
     * Wenn fi z.B. als Integer definiert wurde und grösser als 2^(31) - 1 = 2147483647 
     * wird, dann ist fi ausserhalb des Wertebereiches eines Integers und 
     * das Programm gibt eine negative Zahl zurück.
     */
    
    // Das Programm läuft auch für N = 200 ohne nennenswerte Verzögerung auf dem genutzten Computer.
    // Die Schnelligkeit des Programms ist computerabhängig und müsste eigentlich mit der O-Notation
    // definiert werden, damit man einen vergleichbaren Wert hat.
    return 0;
}
