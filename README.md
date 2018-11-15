# Projet-Cardio
Le projet est décomposé en 4 Modules, ayant respectivement pour rôles la récupération des données cardiaques, l'indication luminescente par LED du pouls, l'enregistrement des données en mémoire et l'interface utilisateur.

## Module 1
Il permet de repérer les pulsations cardiaques grâce à une LED Infrarouge et un photoresistor. Le montage se fait à l'aide d'un Arduino Uno, d'une breadboard et de pinces imprimées en 3D.
Le programme est en `c arduino` et est à téléverser directement sur la carte. Il alimente le montage par sa sortie 5V et récupère les données par le Pin Analogique `A0`.

## Module 2
Il informe l'utilisateur des pulsations cardiaques en faisant clignoter des LEDs formant un coeur. L'utilisateur peut choisir antérieurement un *profil de coeur* permettant de sélectionner une configuration de LEDs (toutes en même temps, une sur deux, à la suite...)
Cette configuration se fera dans un programme en C (non arduino) et génèrera un fichier `param.h` qui sera lu par le programme `coeur.c`.

## Module 3
[Processing](https://processing.org/) est un IDE basé sur Java pouvant lire le Port Série de l'Arduino Uno. Ainsi, il peut être utilisé pour mettre en mémoire les données (de battements cardiaques) et les enregistrer au format `CSV`.

## Module 4
Un programme en C (non Arduino) capable de lire le fichier `CSV` et d'en afficher les informations demandées (afficher les données dans l'ordre, rechercher un temps prècis, claculer une moyenne des BPM...).
