slownik = {
    "kot": "cat",
    "pies": "dog",
    "dom": "house",
    "szkoła": "school",
}
print("Witaj w słowniku polsko-angielskim!")
print("1. Tłumaczenie z polskiego na angielski")
print("2. Tłumaczenie z angielskiego na polski")
wybor = input("Wybierz opcję (1-2): ")
if wybor == '1':
    slowo = input("Podaj słowo po polsku: ")
    if slowo in slownik:
        print(f"{slowo} po angielsku to: {slownik[slowo]}")
    else:
        print("Nie znaleziono słowa w słowniku.")
        dodaj = input("Czy chcesz dodać to słowo do słownika? (tak/nie): ")
        if dodaj == 'tak':
            definicja = input("Podaj definicję po angielsku: ")
            slownik[slowo] = definicja
            print(f"Słowo {slowo} zostało dodane do słownika.")
elif wybor == '2':
    slowo = input("Podaj słowo po angielsku: ")
    odwrotny_slownik = {v: k for k, v in slownik.items()}
    if slowo in odwrotny_slownik:
        print(f"{slowo} po polsku to: {odwrotny_slownik[slowo]}")
    else:
        print("Nie znaleziono słowa w słowniku.")
        dodaj = input("Czy chcesz dodać to słowo do słownika? (tak/nie): ")
        if dodaj == 'tak':
            definicja = input("Podaj definicję po polsku: ")
            odwrotny_slownik[slowo] = definicja
            print(f"Słowo {slowo} zostało dodane do słownika.")
else:
    print("Wybrałeś niepoprawną opcję.")
