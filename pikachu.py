import os, sys

def pikalang(str):
    str = str.lower()
    output = ''
    for s in str:
        if s == 'a':
            output += 'chu~'
            continue
        if s == 'b':
            output += 'chukapi~'
            continue
        if s == 'c':
            output += 'pikachu~'
            continue
        if s == 'd':
            output += 'pikapi~'
            continue
        if s == 'e':
            output += 'pi~'
            continue
        if s == 'f':
            output += 'kachupi~'
            continue
        if s == 'g':
            output += 'kachuka~'
            continue
        if s == 'h':
            output += 'chuka~'
            continue
        if s == 'i':
            output += 'pichu~'
            continue
        if s == 'j':
            output += 'pikapika~'
            continue
        if s == 'k':
            output += 'chukachu~'
            continue
        if s == 'l':
            output += 'pichupi~'
            continue
        if s == 'm':
            output += 'pichuka~'
            continue
        if s == 'n':
            output += 'kapi~'
            continue
        if s == 'o':
            output += 'pika~'
            continue
        if s == 'p':
            output += 'kapika~'
            continue
        if s == 'q':
            output += 'kachukachu~'
            continue
        if s == 'r':
            output += 'kachu~'
            continue
        if s == 's':
            output += 'chupi~'
            continue
        if s == 't':
            output += 'ka~'
            continue
        if s == 'u':
            output += 'kapichu~'
            continue
        if s == 'v':
            output += 'pichupichu~'
            continue
        if s == 'w':
            output += 'chupika~'
            continue
        if s == 'x':
            output += 'kapichuka~'
            continue
        if s == 'y':
            output += 'chupichu~'
            continue
        if s == 'z':
            output += 'chupichuka~'
            continue
        if s == '0':
            output += 'pikachupi~'
            continue
        if s == '1':
            output += 'pikachuka~'
            continue
        if s == '2':
            output += 'pichukapi~'
            continue
        if s == '3':
            output += 'pichukachu~'
            continue
        if s == '4':
            output += 'kapikachu~'
            continue
        if s == '5':
            output += 'kapichuka~'
            continue
        if s == '6':
            output += 'kachupichu~'
            continue
        if s == '7':
            output += 'chukapika~'
            continue
        if s == '8':
            output += 'chukapichu~'
            continue
        if s == '9':
            output += 'chukachupi~'
            continue
        if s == ' ':
            output += '~'
            continue
        output += s

    return output

if __name__ == "__main__":
    if len(sys.argv) <= 1 or  len(sys.argv) >= 3:
        print("""invalid input.

If you want translate words, input:
python3 pikachu.py nyanya~
The Terminal will return:
kapi~chupichu~chu~kapi~chupichu~chu~~

Or translate sentence, input:
python3 pikachu.py "Author by firedom"
The Terminal will return:
chu~kapichu~ka~chuka~pika~kachu~~chukapi~chupichu~~kachupi~pichu~kachu~pi~pikapi~pika~pichuka~""")
        sys.exit(0)
    print(pikalang(sys.argv[1]))
