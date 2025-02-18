grammar DoctorLang;
//parser rules
file:(lines +=line)*;
line:(fd SPACE* NEWLINE*);
type: (WORD);
variable : name=WORD (SPACE* ':' SPACE* typ=type)?;

function : var=variable SPACE* '('(params += variable? SPACE* ( ',' SPACE* params+=variable)*) ')';
fd: function ENDSTATEMENT ;
//declaration:fd;// (functionDeclaration);
// lexer rules;
WORD : [a-zA-Z_] [a-zA-Z0-9_]*;
ENDSTATEMENT: ';';
COMMA : ',';
SPACE : (' ' | '\t' | '\n' | '\r')+;
NEWLINE     : ('\r'? '\n' | '\r')+ ;