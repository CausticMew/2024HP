#include "Intermediate.h"

void Intermediate::questions() {
    Question q1("\nWhich word is the verb in the following sentence: 'Ella canta en el coro'?", {"Ella", "canta", "el", "coro"}, 2);
    Question q2("\nHow do you say 'To understand' in Spanish", {"Entender", "Aprender", "Prender", "Encontrar"}, 1);
    Question q3("\nWhat is the English word for 'Confianza'", {"Trust", "Confidential", "Conscious", "Confide"}, 1);
    Question q4("\nWhat is the English word for 'Tamaño'", {"Tomato", "Sacred", "Size", "Tamed"}, 3);
    Question q5("\nNormalmente voy al trabajo _________ bicicleta.", {"el", "a", "por", "en"}, 4);
    Question q6("\n¿Nos puede ____________ la cuenta?", {"llevar", "sacar", "traer", "poner"}, 3);
    Question q7("\nThe water is overflowing into the hallway of your hostel in Spain and you can’t turn it off. You run to the front desk to tell the owner. You say you have:", {"un problemo", "una problema", "una problemo", "un problema"}, 2);
    Question q8("\nYou are a female teacher and you want to tell this to a new acquaintance at a party. You say", {"Soy un profesora", "Usted es profesora", "Soy profesor", "Soy profesora"}, 4);
    Question q9("\n_____________ preparar muchos ejercicios para clase.", {"Tengo que", "Va para", "Esta de", "Estoy"}, 1);
    Question q10("\nWhat is the English word for 'Ejercicio'", {"Exorcise", "Example", "Exemption", "Exercise"}, 4);

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

//Question q1("\n", {"", "", "", ""}, );
