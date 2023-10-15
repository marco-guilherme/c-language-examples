# Exemplos em Linguagem C

Exemplos de código-fonte escritos em linguagem C para demonstrar as
funcionalidades, características e recursos da linguagem.

## Compilação, Execução e Depuração

Para compilar/executar/depurar um arquivo C que contenha uma função `main` pelo
Visual Studio Code, é necessário instalar a extensão
[C/C++ da Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).
Após instalar, abra o arquivo no Visual Studio Code e clique no ícone de play
localizado no canto superior direito para compilar/executar/depurar.  
Alternativamente, você pode compilar manualmente:

```
gcc -g .\src\main.c -o .\bin\main.exe
```

Execução:

```
.\bin\main.exe
```

Depuração:

```
gdb .\bin\main.exe
```

## Informações Adicionais

**Versão do MinGW**: mingw-get version 0.6.2-beta-20131004-1 | mingw32

**Versão do GCC**: gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0

**Versão do Visual Studio Code**: 1.80.1 (system setup)

**Versão da extensão C/C++**: 1.17.5
