# Herencia_1

En este ejercicio sobre herencia hemos creado una clase inicial de puntos que representa un vector dentro de una figura (lugar donde se unen las aristas), con sus repsectivas variables de X e Y para ser matematicamente tomado en cuenta en un plano cartesiano. Seguido a ello hemos incertado dicha clase directo en una clase general de figura, de donde se derivarán el resto de nuestras clases.

El motivo del proyecto es el calculo de área y perimetro de tres figuras en base a sus vectores (y por implcito sus calculadas aristas), esto a través de heredar comportamientos y funciones de su clase padre que sería figura. Siendo construidas a base del objetoc Figura, usando las mismas variables e incluso aplicando las mismas funciones parte de la clase "Figura" para calcular las distancias de vector a vector. 

Lo importante del trabajo es el uso de la herencia a través de las tres clases finales implementadas en la aplicación, pues eestas usan metodos y formad basadas en la clase general de una "Figura". La cual como es cuenta con vectores y una forma de calcular la distancia entre ellos, solo es aplicada dicha forma en las clases derivadas donde también se sobre escribre el ya mencionado print. 
