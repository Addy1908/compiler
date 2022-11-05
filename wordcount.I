%{
int char_count = 0;
int word_count = 0;
int line_count = 0;
%}
word [^ \t\n]+
eol \n
%%
{word} {word_count++; char_count+=yyleng;}
{eol} {char_count++; line_count++;}
. char_count++;
%%
int yywrap()
{}
int main() {
yylex();
printf("line_count = %d , word_count = %d,char_count = %d\n", line_count, word_count, char_count);
return 0;
}
