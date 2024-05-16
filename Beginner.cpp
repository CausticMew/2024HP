#include "Beginner.h"

void Beginner::questions() {
    Question q1("\nWhat is the color of the sky?", {"Rojo", "Azul", "Verde", "Amarillo"}, 2);
    Question q2("\nWhich planet is known as the Red Planet?", {"Marte", "Jupiter", "Saturno", "Venus"}, 1);
    Question q3("\nHow many days are there in a week?", {"Siete", "Ocho", "Seis", "Catorce"}, 1);
    Question q4("\nWhat is the Spanish word for 'Hello'?", {"Adios", "Bienvenido", "Hola", "Biblioteca"}, 3);
    Question q5("\nWhat is the Spanish word for 'water'?", {"Pimienta", "Jugo", "Leche", "Agua"}, 4);
    Question q6("\nWhat animal is 'dog' in Spanish?",{"Gato", "Leon", "Oso", "Perro"}, 4);
    Question q7("\nHow many continents are there in the world?", {"Cinco", "Nueve", "Siete", "Once"}, 3);
    Question q8("\nWhat does 'Boca' mean in English?", {"Nose", "Mouth", "Eyes", "Ears"}, 2);
    Question q9("\nWhat does 'Junto' mean in English?", {"Together", "Apart", "Stuck", "Justice"}, 1);
    Question q10("\nWhat does 'Perdido' mean in English", {"Found", "Persist", "Lost", "Purchase"}, 3);

    quiz.addQuestion(q1);
    quiz.addQuestion(q2);
    quiz.addQuestion(q3);
    quiz.addQuestion(q4);
    quiz.addQuestion(q5);
    quiz.addQuestion(q6);
    quiz.addQuestion(q7);
    quiz.addQuestion(q8);
    quiz.addQuestion(q9);
    quiz.addQuestion(q10);

    quiz.startQuiz();
}
