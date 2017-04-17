#include <stdio.h>


void tran(const char *src){
	int state = 0;
	for(int i = 0; src[i] != 0; i++){
		 switch (state){
		 	case 0:
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 1;
		 			continue;
		 		}
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 2;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 3;
		 			continue;
		 		}
		 				 		if (src[i] == ' ')
		 		{
		 			putchar(' ');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '`')
		 		{
		 			putchar('`');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '-')
		 		{
		 			putchar('-');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '=')
		 		{
		 			putchar('=');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '[')
		 		{
		 			putchar('[');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == ']')
		 		{
		 			putchar(']');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '\\')
		 		{
		 			putchar('\\');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == ';')
		 		{
		 			putchar(';');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '\'')
		 		{
		 			putchar('\'');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == ',')
		 		{
		 			putchar(',');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '.')
		 		{
		 			putchar('.');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '/')
		 		{
		 			putchar('/');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('~');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '_')
		 		{
		 			putchar('_');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '+')
		 		{
		 			putchar('+');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '{')
		 		{
		 			putchar('{');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '}')
		 		{
		 			putchar('}');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '|')
		 		{
		 			putchar('|');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == ':')
		 		{
		 			putchar(':');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '"')
		 		{
		 			putchar('"');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '<')
		 		{
		 			putchar('<');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '>')
		 		{
		 			putchar('>');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '?')
		 		{
		 			putchar('?');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '!')
		 		{
		 			putchar('!');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '@')
		 		{
		 			putchar('@');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '#')
		 		{
		 			putchar('#');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '$')
		 		{
		 			putchar('$');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '%')
		 		{
		 			putchar('%');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '^')
		 		{
		 			putchar('^');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '&')
		 		{
		 			putchar('&');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '*')
		 		{
		 			putchar('*');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '(')
		 		{
		 			putchar(')');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == ')')
		 		{
		 			putchar(')');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 1:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 5;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 6;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('e');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 2:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 7;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 8;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('t');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 3:
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 9;
		 			continue;
		 		}
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 10;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('a');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 4:
		 		printf("...er, I have no idea.\n");
		 		return;
		 	case 5:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 11;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 12;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('o');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 6:
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 13;
		 			continue;
		 		}
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 14;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('i');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 7:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 15;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 16;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('r');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 8:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 17;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 18;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('n');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 9:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 1;
		 			state = 19;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 20;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('s');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 10:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 2;
		 			state = 21;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 1;
		 			state = 22;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('h');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 11:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 2;
		 			putchar('1');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 2;
		 			putchar('0');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('c');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 12:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 2;
		 			putchar('j');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('d');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 13:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('v');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('l');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 14:
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 2;
		 			putchar('2');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('3');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('m');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 15:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('q');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('g');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 16:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('6');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('f');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 17:
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('4');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('p');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 18:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 2;
		 			putchar('x');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 2;
		 			putchar('5');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('u');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 19:
		 		if (src[i] == '~')
		 		{
		 			putchar('w');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 20:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 2;
		 			putchar('z');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('y');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 21:
		 		if (src[i] == 'p' && src[i + 1] == 'i')
		 		{
		 			i += 2;
		 			putchar('9');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('k');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;
		 	case 22:
		 		if (src[i] == 'k' && src[i + 1] == 'a')
		 		{
		 			i += 2;
		 			putchar('7');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == 'c' && src[i + 1] == 'h' && src[i + 2] == 'u')
		 		{
		 			i += 3;
		 			putchar('8');
		 			state = 0;
		 			continue;
		 		}
		 		if (src[i] == '~')
		 		{
		 			putchar('b');
		 			state = 0;
		 			continue;
		 		}
		 		state = 4;
		 		continue;

		 }
	}
	puts("");
}


int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		tran(argv[1]);
	}
	return 0;
}


