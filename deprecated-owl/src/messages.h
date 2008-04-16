/*
 * You should never use a " in translations. Even if it is scaped.
 *
 * "" => right
 * "\"" => wrong!
 *
 * ----------------------
 *
 * Please don't remove the BEGIN, END blocks. Those are like this:
 *
 *   __SPANISH__ BEGIN
 *
 * Just leave them as they are.
 */

#if 1 /* Espa�ol -- Idioma por defecto */
  /* __SPANISH__ BEGIN */
  #define TXT_DESBORDAMIENTO "Desbordamiento en la operaci�n"
  #define TXT_DESBORDAMIENTO_NEGATIVO "Desbordamiento negativo en la operaci�n"
  #define TXT_LOS_TIPOS_NO_COINCIDEN "Los tipos no coinciden"
  #define TXT_ID_NO_ES_ARREGLO "El identificador no es es un arreglo"
  #define TXT_DIMENSION_NO_VALIDA "Dimensi�n no v�lida"
  #define TXT_CONSTANTE_NUMERICA_ILEGAL "Constante num�rica ilegal"
  #define TXT_NOMBRE_VARIABLE_INCORRECTO "Nombre de variable incorrecto"
  #define TXT_FUNCION_REQUIERE_PARAMETRO "La funci�n requiere argumentos"
  #define TXT_FALTA_OPERADOR "Se esperaun operador"
  #define TXT_CADENA_INDETERMINADA "Se espera ' para delimitar el fin de la cadena"
  #define TXT_CONSTANTE_LOGICA_ILEGAL "Se esperaba una constante l�gica( .V. o .F. )"
  #define TXT_OPERADOR_LOGICO_ILEGAL "Operador l�gico ilegal"
  #define TXT_FALTA_OPERANDO "Se esperaba un operando"
  #define TXT_OPERADOR_ILEGAL "Operador no v�lido"
  #define TXT_CARACTER_ILEGAL "Caracter no v�lido"
  #define TXT_CERRADO_PARENTESIS_NO_ABIERTO "Cerrado par�ntesis no abierto"
  #define TXT_ABIERTO_PARENTESIS_NO_CERRADO "Abierto par�ntesis no cerrado"
  #define TXT_COMA_ILEGAL "Uso ilegal del operador"
  #define TXT_ERROR_MATEMATICO "Error Matem�tico"
  #define TXT_LLAMADO_DE_FUNCION_NO_VALIDO "Llamado de funci�n no v�lido"
  #define TXT_VARIABLE_NO_INICIALIZADA "Variable no inicializada"
  #define TXT_VARIABLE_NO_EXISTE "Variable no existe"
  #define TXT_DIVISION_POR_CERO "Divisi�n por cero"
  #define TXT_SUBINDICE_NO_VALIDO ": Indice no v�lido"
  #define TXT_INDICES "Los �ndices deben ser enteros no negativos menores o iguales a 65535."
  #define TXT_ILEGAL_COMA_O_CADENA_VACIA "Uso ilegal de la coma � falta expresi�n"
  #define TXT_SOLO_VARIABLES "La asignaci�n de valores solo se realiza en campos variables"
  #define TXT_NO_INDICES "No hay �ndices entre los par�ntesis. Los par�ntesis se usan para acceder a elementos de un arreglo."
  #define TXT_TIPO_DEBE_SER_LOGICO "La condici�n debe ser de tipo l�gico"
  #define TXT_VINICIAL_CONTADOR "Se necesita un valor inicial para el contador"
  #define TXT_VFINAL_CONTADOR "Se necesita un valor final para el contador"
  #define TXT_INCREMENTO_CONSTANTE "El incremento debe ser una constante real"
  #define TXT_CONTADOR_REAL "El valor del contador debe ser de tipo real"
  #define TXT_LIMITE_REAL "El valor del l�mite para el contador debe ser de tipo real"
  #define TXT_PARAMETRO_NO_VARIABLE "Los par�metros deben ser campos variables"
  #define TXT_ILEGAL_NOMBRE_SUBPROGRAMA "Nombre no v�lido para un subprograma"
  #define TXT_PARAMETRO_REPETIDO "Par�metro Repetido"
  #define TXT_SUBPROGRAMA_NO_EXISTE ": No se encontr� el Subprograma"
  #define TXT_SUBPROGRAMA_REPETIDO ": Subprograma repetido"
  #define TXT_MUCHOS_ARGUMENTOS ": Demasiados argumentos"
  #define TXT_POCOS_ARGUMENTOS ": Muy pocos argumentos"
  #define TXT_ERROR_INDEFINIDO ": Error no definido"

  /* men� */

  #define TXT_MENU_FILE "&Archivo"
  #define TXT_MENU_EDIT "&Edicion"
  #define TXT_MENU_OBJECT "&Objeto"
  #define TXT_MENU_VIEW "&Ver"
  #define TXT_MENU_ZOOM "&Zoom"
  #define TXT_MENU_RUN "Eje&cuci�n"
  #define TXT_MENU_DEBUG "&Depuraci�n"
  #define TXT_MENU_THEOPTIONS "O&pciones"
  #define TXT_MENU_THEHELP "A&yuda"

  #define TXT_CM_ARCHIVONUEVO "&Nuevo\tCtrl+N"
  #define TXT_CM_ARCHIVOABRIR "&Abrir...\tCtrl+A"
  #define TXT_CM_ARCHIVOGUARDAR "&Guardar\tCtrl+G"
  #define TXT_CM_ARCHIVOGUARDARCOMO "Guardar &Como...     "
  #define TXT_CM_ARCHIVOCONFIGURARIMPRESORA "Configurar impresora..."
  #define TXT_CM_ARCHIVOIMPRIMIR "Im&primir...\tCtrl+P"
  #define TXT_CM_ARCHIVOSALIR "&Salir\tAlt+F4"
  #define TXT_CM_EDICIONCORTAR "&Cortar\tCtrl+X"
  #define TXT_CM_EDICIONCOPIAR "C&opiar\tCtrl+C"
  #define TXT_CM_EDICIONPEGAR "&Pegar\tCtrl+V"
  #define TXT_CM_EDICIONELIMINAR "&Eliminar\tSupr"
  #define TXT_CM_EDICIONELIMINARSUBPROGRAMA "Eliminar &Subprograma"
  #define TXT_CM_EDICIONINSERTAROBJETO "Insertar Objeto\tIns"
  #define TXT_CM_EDICIONEDITAR "E&ditar Objeto...\tEnter"
  #define TXT_CM_SELECCIONACURSORMENU "&Cursor"
  #define TXT_CM_OBJETOASIGNACIONMENU "&Asignacion"
  #define TXT_CM_OBJETOMIENTRASMENU "Ciclo &mientras"
  #define TXT_CM_OBJETOPARAMENU "Ciclo &para"
  #define TXT_CM_OBJETODECISIONMENU "&Decision"
  #define TXT_CM_OBJETOLECTURAMENU "L&ectura"
  #define TXT_CM_OBJETOLLAMADAMENU "&Llamada"
  #define TXT_CM_OBJETOSALIDAMENU "&Salida"
  #define TXT_CM_OBJETONUEVOSUBPROGRAMA "&Nuevo Subprograma"
  #define TXT_CM_VERZOOMMAS "&Acercar\t+        "
  #define TXT_CM_VERZOOMMENOS "A&lejar\t-         "
  #define TXT_CM_VERSUBPROGRAMAMENOS "An&terior subprograma\tCtrl+Izquierda"
  #define TXT_CM_VERSUBPROGRAMAMAS "&Siguiente Subprograma\tCtrl+Derecha"
  #define TXT_CM_VERDEPURADOR "&Depurador\tF6 "
  #define TXT_CM_DEPURAREJECUTAR "&Ejecutar\tF9 "
  #define TXT_CM_DEPURARPAUSAR "P&ausar\tPausa"
  #define TXT_CM_DEPURARDETENER "&Detener\tCtrl+Pausa"
  #define TXT_CM_DEPURARPASOSIMPLE "&Paso simple\tF7"
  #define TXT_CM_DEPURAREJECUTARHASTA "&Ejecutar hasta\tF4"
  #define TXT_CM_DEPURARDETENER "&Detener\tCtrl+Pausa"
  #define TXT_CM_DEPURAREVALUAR "E&valuar\tF5"
  #define TXT_CM_ANGULOSENGRADOS "&Angulos en &grados"
  #define TXT_CM_ANGULOSENRADIANES "Angulos en &radianes"
  #define TXT_CM_AYUDACONTENIDO "&Contenido...\tF1"
  #define TXT_CM_AYUDAACERCADE "&Acerca de...     "

  /* Ayuda contextual */

  #define HELP_CM_ARCHIVONUEVO "Inicia la sesi�n de trabajo con un nuevo diagrama"
  #define HELP_CM_ARCHIVOABRIR "Inicia la sesi�n de trabajo con un diagrama ya existente"
  #define HELP_CM_ARCHIVOGUARDAR "Guarda el diagrama en edici�n"
  #define HELP_CM_ARCHIVOGUARDARCOMO "Guarda el diagrama en edici�n con un nuevo nombre"
  #define HELP_CM_VERZOOMMENOS "Dismunuye el tama�o de los objetos en pantalla"
  #define HELP_CM_VERZOOMMAS "Aumenta el tama�o de los objetos en pantalla"
  #define HELP_CM_ARCHIVOSALIR "Salir de Creaci�n"
  #define HELP_CM_AYUDAACERCADE "Muestra informaci�n sobre los autores y la versi�n"
  #define HELP_CM_OBJETOASIGNACION "Permite asignar valores a  variables"
  #define HELP_CM_OBJETOMIENTRAS "Ejecuta un bloque de instrucciones mientras la condici�n sea verdadera"
  #define HELP_CM_OBJETOPARA "Ejecuta un bloque de instrucciones hasta que el contador alcance el l�mite"
  #define HELP_CM_OBJETODECISION "Selecciona el flujo a seguir de acuerdo al valor l�gico de una condici�n"
  #define HELP_CM_OBJETOLECTURA "Permite dar valores a las variables desde teclado"
  #define HELP_CM_OBJETOLLAMADA "Invoca a un subprograma"
  #define HELP_CM_OBJETOSALIDA "Muestra valores por pantalla"
  #define HELP_CM_OBJETONUEVOSUBPROGRAMA "Crea un nuevo subprograma"
  #define HELP_CM_SELECCIONACURSOR "Permite seleccionar objetos del diagrama en edici�n"
  #define HELP_CM_EDICIONELIMINARDEPURADOR "Elimina la expresi�n seleccionado"
  #define HELP_CM_EDICIONCORTAR "Corta el objeto seleccionado"
  #define HELP_CM_EDICIONCOPIAR "Copia el objeto seleccionado"
  #define HELP_CM_EDICIONPEGAR "Inserta a continuaci�n del objeto seleccionado"
  #define HELP_CM_VERSUBPROGRAMAMAS "Visualiza el siguiente subprograma "
  #define HELP_CM_VERSUBPROGRAMAMENOS "Visualiza el subprograma anterior"
  #define HELP_CM_EDICIONELIMINARSUBPROGRAMA "Elimina el subprograma en edici�n"
  #define HELP_CM_DEPURAREJECUTAR "Ejecuta el algoritmo representado por el diagrama en edici�n"
  #define HELP_CM_DEPURARDETENER "Termina la ejecuci�n del algoritmo"
  #define HELP_CM_DEPURARPAUSAR "Realiza una pausa en la ejecuci�n del algoritmo"
  #define HELP_CM_DEPURARPASOSIMPLE "Ejecuta el siguiente objeto"
  #define HELP_CM_DEPURAREJECUTARHASTA "Ejecuta el algoritmo deteni�ndose en el objeto seleccionado"
  #define HELP_CM_ANGULOSENGRADOS "Angulos en grados para las funciones trigonom�tricas"
  #define HELP_CM_ANGULOSENRADIANES "Angulos en radianes para las funciones trionom�tricas"
  #define HELP_CM_EDICIONINSERTAROBJETO "Inserta el objeto indicado por el puntero a continuaci�n del objeto seleccionado"
  #define HELP_CM_EDICIONEDITARDEPURADOR "Edita la expresi�n seleccionada"
  #define HELP_CM_VERDEPURADOR "Muestra o esconde la ventana de depuraci�n"
  #define HELP_CM_VERDEPURADORBOTON "Muestra o esconde la ventana de depuraci�n"
  #define HELP_CM_EDICIONNUEVO "Inserta una nueva expresi�n"
  #define HELP_CM_OBJETOASIGNACIONMENU "Permite asignar valores a  variables"
  #define HELP_CM_OBJETOMIENTRASMENU "Ejecuta un bloque de instrucciones mientras la condici�n sea verdadera"
  #define HELP_CM_OBJETOPARAMENU "Ejecuta un bloque de instrucciones hasta que el contador alcance el l�mite"
  #define HELP_CM_OBJETODECISIONMENU "Selecciona el flujo a seguir de acuerdo al valor l�gico de una condici�n"
  #define HELP_CM_OBJETOLECTURAMENU "Permite dar valores a las variables desde teclado"
  #define HELP_CM_OBJETOLLAMADAMENU "Invoca a un subprograma"
  #define HELP_CM_OBJETOSALIDAMENU "Muestra valores por pantalla"
  #define HELP_CM_SELECCIONACURSORMENU "Permite seleccionar objetos del diagrama en edici�n"
  #define HELP_CM_EDICIONELIMINAR "Elimina del diagrama el objeto seleccionado"
  #define HELP_CM_EDICIONEDITAR "Edita el contenido del objeto seleccionado"
  #define HELP_CM_DEPURAREVALUAR "Muestra el di�logo para evaluaci�n de expresiones"
  #define HELP_CM_AYUDACONTENIDO "Muestra el contenido de la ayuda"
  #define HELP_CM_ARCHIVOIMPRIMIR "Imprime la hoja actual"
  #define HELP_CM_ARCHIVOCONFIGURARIMPRESORA "Configura las caracter�sticas relacionadas con la impresora"

  /* Dialogs, message boxes */

  #define TXT_DIALOG_EXECUTION_OK "La ejecuci�n ha terminado con normalidad"
  #define TXT_DIALOG_REPORT_BUG "Favor informar a los autores para que arreglen el error"
  #define TXT_DIALOG_CONFIRM_DELETE_SUBPROGRAM1  "Si elimina este objeto eliminar� el subprograma completo.\n�Eliminar?"
  #define TXT_DIALOG_CONFIRM_DELETE_SUBPROGRAM2 "�Eliminar el subprograma?"
  #define TXT_DIALOG_CONFIRM_DELETE_BOTH_BRANCHES "Si elimina este objeto eliminar� tambi�n su brazo izquierdo y su brazo derecho.\n�Eliminar? "
  #define TXT_DIALOG_CONFIRM_DELETE_LOOP "Si elimina este objeto eliminar� tambi�n el cuerpo del ciclo.\n�Eliminar?"
  #define TXT_DIALOG_ADD_CONSTANT "Debe ingresar un valor constante"
  #define TXT_DIALOG_EVALUATION_ERROR "Error de evaluaci�n"
  #define TXT_DIALOG_UNABLE_SAVE_FILE "No fue posible guardar el archivo"
  #define TXT_DIALOG_UNABLE_OPEN_FILE "No fue posible abrir el archivo"
  #define TXT_DIALOG_INVALID_FILE_FORMAT "El archivo no es un archivo de Dfd"
  #define TXT_DIALOG_PROGRAM_CHECK_ERROR "Error de revisi�n"
  #define TXT_DIALOG_PROGRAM_RUN_ERROR "Error de revisi�n"

  /* Objetos en Ejecuci�n */

  #define TXT_RUNNING_OBJECT_YES "S�"
  #define TXT_RUNNING_OBJECT_NO "No"
  #define TXT_RUNNING_OBJECT_FOR "Para"
  #define TXT_RUNNING_OBJECT_WHILE "Mientras"
  #define TXT_RUNNING_OBJECT_BEGIN "Inicio"
  #define TXT_RUNNING_OBJECT_END "Fin"
  #define TXT_RUNNING_OBJECT_BLOCK_END "Cierre"
  #define TXT_RUNNING_OBJECT_RETURN "Retornar"

  /* __SPANISH__ END */
  #elif 0 /* Portugu�s by Charles Guimar�es Cavalcante - www.charles.art.br - e-mail@charles.art.br */
  /* __PORTUGUESE__ BEGIN */
  #define TXT_DESBORDAMIENTO "Transbordamento na opera��o"
  #define TXT_DESBORDAMIENTO_NEGATIVO "Transbordamento negativo na opera��o"
  #define TXT_LOS_TIPOS_NO_COINCIDEN "Os tipos se coincidem"
  #define TXT_ID_NO_ES_ARREGLO "O identificador n�o � um vetor (array)"
  #define TXT_DIMENSION_NO_VALIDA "Dimens�o n�o v�lida"
  #define TXT_CONSTANTE_NUMERICA_ILEGAL "Constante num�rica ilegal"
  #define TXT_NOMBRE_VARIABLE_INCORRECTO "Nome de vari�vel incorreta"
  #define TXT_FUNCION_REQUIERE_PARAMETRO "A fun��o requer argumentos"
  #define TXT_FALTA_OPERADOR "Operador esperado"
  #define TXT_CADENA_INDETERMINADA "Esperado ' para delimitar o fim de uma cadeia de caracteres (string)"
  #define TXT_CONSTANTE_LOGICA_ILEGAL "Esperada uma constante l�gica (V ou F)"
  #define TXT_OPERADOR_LOGICO_ILEGAL "Operador l�gico ilegal"
  #define TXT_FALTA_OPERANDO "Esperado um operador"
  #define TXT_OPERADOR_ILEGAL "Operador inv�lido"
  #define TXT_CARACTER_ILEGAL "Caractere inv�lido"
  #define TXT_CERRADO_PARENTESIS_NO_ABIERTO "Fechado par�ntesis n�o aberto"
  #define TXT_ABIERTO_PARENTESIS_NO_CERRADO "Aberto par�ntesis n�o fechado"
  #define TXT_COMA_ILEGAL "Uso ilegal do operador"
  #define TXT_ERROR_MATEMATICO "Erro Matem�tico"
  #define TXT_LLAMADO_DE_FUNCION_NO_VALIDO "Chamada de fun��o inv�lida"
  #define TXT_VARIABLE_NO_INICIALIZADA "Vari�vel n�o inicializada"
  #define TXT_VARIABLE_NO_EXISTE "Vari�vel inexistente"
  #define TXT_DIVISION_POR_CERO "Divis�o por zero"
  #define TXT_SUBINDICE_NO_VALIDO ": �ndice inv�lido"
  #define TXT_INDICES "Os �ndices devem ser inteiros n�o negativos menores ou iguais a 65535."
  #define TXT_ILEGAL_COMA_O_CADENA_VACIA "Uso ilegal da v�rgula ou falta de express�o"
  #define TXT_SOLO_VARIABLES "A defini��o de valores s� se realiza em campos vari�veis"
  #define TXT_NO_INDICES "N�o h� �ndices entre par�ntesis. Os par�ntesis s�o usados acessar os elementos de um vetor (array)."
  #define TXT_TIPO_DEBE_SER_LOGICO "A condi��o deve ser de tipo l�gico"
  #define TXT_VINICIAL_CONTADOR "Necessita-se um valor inicial para o contador"
  #define TXT_VFINAL_CONTADOR "Necessita-se um valor final para o contador"
  #define TXT_INCREMENTO_CONSTANTE "O incremento deve ser uma constante real"
  #define TXT_CONTADOR_REAL "O valor do contador deve ser de tipo real"
  #define TXT_LIMITE_REAL "O valor do limite para o contador deve ser de tipo real"
  #define TXT_PARAMETRO_NO_VARIABLE "Os par�metros devem ser campos vari�veis"
  #define TXT_ILEGAL_NOMBRE_SUBPROGRAMA "Nome inv�lido para um fun��o"
  #define TXT_PARAMETRO_REPETIDO "Par�metro Repetido"
  #define TXT_SUBPROGRAMA_NO_EXISTE ": Fun��o n�o encontrada"
  #define TXT_SUBPROGRAMA_REPETIDO ": Fun��o repetida"
  #define TXT_MUCHOS_ARGUMENTOS ": Muitos argumentos"
  #define TXT_POCOS_ARGUMENTOS ": Faltam argumentos"
  #define TXT_ERROR_INDEFINIDO ": Erro n�o definido"

  /* men� */

  #define TXT_MENU_FILE "&Arquivo"
  #define TXT_MENU_EDIT "&Editar"
  #define TXT_MENU_OBJECT "&Objeto"
  #define TXT_MENU_VIEW "&Visualizar"
  #define TXT_MENU_ZOOM "&Zoom"
  #define TXT_MENU_RUN "Exe&cutar"
  #define TXT_MENU_DEBUG "&Depurar"
  #define TXT_MENU_THEOPTIONS "O&p��es"
  #define TXT_MENU_THEHELP "A&juda"

  #define TXT_CM_ARCHIVONUEVO "&Novo\tCtrl+N"
  #define TXT_CM_ARCHIVOABRIR "&Abrir...\tCtrl+A"
  #define TXT_CM_ARCHIVOGUARDAR "&Salvar\tCtrl+G"
  #define TXT_CM_ARCHIVOGUARDARCOMO "Salvar &Como...     "
  #define TXT_CM_ARCHIVOCONFIGURARIMPRESORA "Configurar impresora..."
  #define TXT_CM_ARCHIVOIMPRIMIR "Im&primir...\tCtrl+P"
  #define TXT_CM_ARCHIVOSALIR "&Sair\tAlt+F4"
  #define TXT_CM_EDICIONCORTAR "&Recortar\tCtrl+X"
  #define TXT_CM_EDICIONCOPIAR "C&opiar\tCtrl+C"
  #define TXT_CM_EDICIONPEGAR "&Colar\tCtrl+V"
  #define TXT_CM_EDICIONELIMINAR "&Excluir\tDelete"
  #define TXT_CM_EDICIONELIMINARSUBPROGRAMA "Excluir &Fun��o"
  #define TXT_CM_EDICIONINSERTAROBJETO "Inserir Objeto\tIns"
  #define TXT_CM_EDICIONEDITAR "E&ditar Objeto...\tEnter"
  #define TXT_CM_SELECCIONACURSORMENU "&Cursor"
  #define TXT_CM_OBJETOASIGNACIONMENU "&Atribui��o"
  #define TXT_CM_OBJETOMIENTRASMENU "Repeti��o &Enquanto"
  #define TXT_CM_OBJETOPARAMENU "Repeti��o &Para"
  #define TXT_CM_OBJETODECISIONMENU "&Decis�o"
  #define TXT_CM_OBJETOLECTURAMENU "L&eitura"
  #define TXT_CM_OBJETOLLAMADAMENU "&Chamada de fun��o"
  #define TXT_CM_OBJETOSALIDAMENU "&Sa�da"
  #define TXT_CM_OBJETONUEVOSUBPROGRAMA "&Nova Fun��o"
  #define TXT_CM_VERZOOMMAS "&Aumentar\t+        "
  #define TXT_CM_VERZOOMMENOS "&Diminuir\t-         "
  #define TXT_CM_VERSUBPROGRAMAMENOS "Fun��o An&terior\tCtrl+Esquerda"
  #define TXT_CM_VERSUBPROGRAMAMAS "&Pr�xima Fun��o\tCtrl+Direita"
  #define TXT_CM_VERDEPURADOR "&Depurador\tF6 "
  #define TXT_CM_DEPURAREJECUTAR "&Executar\tF9 "
  #define TXT_CM_DEPURARPAUSAR "P&ausar\tPausa"
  #define TXT_CM_DEPURARDETENER "&Parar\tCtrl+Pausa"
  #define TXT_CM_DEPURARPASOSIMPLE "Passo &simples\tF7"
  #define TXT_CM_DEPURAREJECUTARHASTA "&Executar at�\tF4"
  #define TXT_CM_DEPURARDETENER "&Parar\tCtrl+Pausa"
  #define TXT_CM_DEPURAREVALUAR "&Avaliar\tF5"
  #define TXT_CM_ANGULOSENGRADOS "�ngulos em &graus"
  #define TXT_CM_ANGULOSENRADIANES "�ngulos em &radianos"
  #define TXT_CM_AYUDACONTENIDO "&Conte�do...\tF1"
  #define TXT_CM_AYUDAACERCADE "&Sobre...     "

  /* ayuda contextual */

  #define HELP_CM_ARCHIVONUEVO "Inicia a sess�o de trabalho com um novo diagrama"
  #define HELP_CM_ARCHIVOABRIR "Inicia a sess�o de trabalho com um diagrama j� existente"
  #define HELP_CM_ARCHIVOGUARDAR "Salva o diagrama aberto"
  #define HELP_CM_ARCHIVOGUARDARCOMO "Salva o diagrama aberto com um novo nome"
  #define HELP_CM_VERZOOMMENOS "Dim�nue o tamanho dos objetos na tela"
  #define HELP_CM_VERZOOMMAS "Aumenta o tamanho dos objetos na tela"
  #define HELP_CM_ARCHIVOSALIR "Sair do Programa"
  #define HELP_CM_AYUDAACERCADE "Mostra informa��o sobre os autores e a vers�o"
  #define HELP_CM_OBJETOASIGNACION "Permite atribuir valores � vari�veis"
  #define HELP_CM_OBJETOMIENTRAS "Executa um bloco de instru��es enquanto a condi��o for verdadeira"
  #define HELP_CM_OBJETOPARA ""Executa um bloco de instru��es at� que o contador alcance o limite"
  #define HELP_CM_OBJETODECISION "Seleciona o fluxo a seguir de acordo com o valor l�gico de uma condi��o"
  #define HELP_CM_OBJETOLECTURA "Permite atribuir valores �s vari�veis digitadas"
  #define HELP_CM_OBJETOLLAMADA "Chama um fun��o"
  #define HELP_CM_OBJETOSALIDA "Mostra os valores por tela"
  #define HELP_CM_OBJETONUEVOSUBPROGRAMA "Cria um nova fun��o"
  #define HELP_CM_SELECCIONACURSOR "Permite selecionar objetos do diagrama aberto"
  #define HELP_CM_EDICIONELIMINARDEPURADOR "Exclui a express�o selecionada"
  #define HELP_CM_EDICIONCORTAR "Recorta o objeto selecionado"
  #define HELP_CM_EDICIONCOPIAR "Copia o objeto selecionado"
  #define HELP_CM_EDICIONPEGAR "Cola o objeto selecionado"
  #define HELP_CM_VERSUBPROGRAMAMAS "Visualiza a pr�xima fun��o "
  #define HELP_CM_VERSUBPROGRAMAMENOS "Visualiza a fun��o anterior"
  #define HELP_CM_EDICIONELIMINARSUBPROGRAMA "Exclui a fun��o aberta"
  #define HELP_CM_DEPURAREJECUTAR "Executa o algor�tmo representado pelo diagrama aberto"
  #define HELP_CM_DEPURARDETENER "Termina a execu��o do algor�tmo"
  #define HELP_CM_DEPURARPAUSAR "Pausa a execu��o do algor�tmo"
  #define HELP_CM_DEPURARPASOSIMPLE "Executa o pr�ximo objeto"
  #define HELP_CM_DEPURAREJECUTARHASTA "Executa o algor�tmo parando no objeto selecionado"
  #define HELP_CM_ANGULOSENGRADOS "�ngulos em graus para as fun��es trigonom�tricas"
  #define HELP_CM_ANGULOSENRADIANES "�ngulos em radianos para as fun��es trigonom�tricas"
  #define HELP_CM_EDICIONINSERTAROBJETO "Insere o objeto indicado pelo cursor depois do objeto selecionado"
  #define HELP_CM_EDICIONEDITARDEPURADOR "Edita a express�o selecionada"
  #define HELP_CM_VERDEPURADOR "Mostra ou esconde a janela de depura��o"
  #define HELP_CM_VERDEPURADORBOTON "Mostra ou esconde a janela de depura��o"
  #define HELP_CM_EDICIONNUEVO "Insere uma nova express�o"
  #define HELP_CM_OBJETOASIGNACIONMENU "Permite atribuir valores � vari�veis"
  #define HELP_CM_OBJETOMIENTRASMENU "Executa um bloco de instru��es enquanto a condi��o for verdadeira"
  #define HELP_CM_OBJETOPARAMENU "Executa um bloco de instru��es at� que o contador alcance o limite"
  #define HELP_CM_OBJETODECISIONMENU "Seleciona o pr�ximo fluxo de acordo com o valor l�gico de uma condi��o"
  #define HELP_CM_OBJETOLECTURAMENU "Permite dar valores �s vari�veis digitadas"
  #define HELP_CM_OBJETOLLAMADAMENU "Chama um fun��o"
  #define HELP_CM_OBJETOSALIDAMENU "Mostra valores na tela"
  #define HELP_CM_SELECCIONACURSORMENU "Permite selecionar objetos do diagrama aberto"
  #define HELP_CM_EDICIONELIMINAR "Exclui do diagrama o objeto selecionado"
  #define HELP_CM_EDICIONEDITAR "Edita o conte�do do objeto selecionado"
  #define HELP_CM_DEPURAREVALUAR "Mostra o di�logo para evalua��o de express�es"
  #define HELP_CM_AYUDACONTENIDO "Mostra o conte�do da ajuda"
  #define HELP_CM_ARCHIVOIMPRIMIR "Imprime a p�gina atual"
  #define HELP_CM_ARCHIVOCONFIGURARIMPRESORA "Configura as propriedades da impressora"

  /* mensajes de di�logo */

  #define TXT_DIALOG_EXECUTION_OK "A execu��o terminou normalmente."
  #define TXT_DIALOG_REPORT_BUG "Favor informar aos autores para que consertem o erro"
  #define TXT_DIALOG_CONFIRM_DELETE_SUBPROGRAM1  "Se excluir este objeto excluir� toda a fun��o.\nExcluir?"
  #define TXT_DIALOG_CONFIRM_DELETE_SUBPROGRAM2 "Excluir a fun��o?"
  #define TXT_DIALOG_CONFIRM_DELETE_BOTH_BRANCHES "Se excluir este objeto excluir� tamb�m seu bra�o esquerdo e o seu bra�o direito.\nExcluir? "
  #define TXT_DIALOG_CONFIRM_DELETE_LOOP "Se excluir este objeto excluir� tamb�m o corpo e a repeti��o.\nExcluir?"
  #define TXT_DIALOG_ADD_CONSTANT "Voc� deve inserir um valor constante"
  #define TXT_DIALOG_EVALUATION_ERROR "Erro de avalia��o"
  #define TXT_DIALOG_UNABLE_SAVE_FILE "N�o foi pos�vel salvar o arquivo"
  #define TXT_DIALOG_UNABLE_OPEN_FILE "N�o foi pos�vel abrir el arquivo"
  #define TXT_DIALOG_INVALID_FILE_FORMAT "O arquivo n�o � um arquivo de Dfd"
  #define TXT_DIALOG_PROGRAM_CHECK_ERROR "Erro de revis�o"
  #define TXT_DIALOG_PROGRAM_RUN_ERROR "Erro de execu��o"
  /* Objetos en Ejecuci�n */

  #define TXT_RUNNING_OBJECT_YES "Pt:S�"
  #define TXT_RUNNING_OBJECT_NO "Pt:No"
  #define TXT_RUNNING_OBJECT_FOR "Pt:Para"
  #define TXT_RUNNING_OBJECT_WHILE "Pt:Mientras"
  #define TXT_RUNNING_OBJECT_BEGIN "Pt:Inicio"
  #define TXT_RUNNING_OBJECT_END "Pt:Fin"
  #define TXT_RUNNING_OBJECT_BLOCK_END "Pt:Cierre"
  #define TXT_RUNNING_OBJECT_RETURN "Pt:Retornar"

  /* __PORTUGUESE__ END */
#else
  #error You should define a language to be compiled
#endif
