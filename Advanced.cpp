#include "Advanced.h"

void Advanced::questions() {
    Question q1("\nYo soy enfermera, y tú ¿a qué _________?", {"estas", "te dedicas", "trabajas", "haces"}, 2);
    Question q2("\nWhat is the English word for 'Preocupado'?", {"Occupied", "Concerned", "Worried", "Presentation"}, 3);
    Question q3("\nHow do you say 'Girasol' in Spanish?", {"Sunflower", "Tulip", "Rose", "Daffodil"}, 1);
    Question q4("\n¿Qué haces los fines de semana? – Normalmente yo _____ al cine y ______ al fútbol con mis amigos.", {"voy/jugo", "ando/juego", "ir/jugar", "voy/juego"}, 4);
    Question q5("\n¿Cuántos años __________ tú? - _________ 25.", {"tenes/tengo", "as/soy", "tiene/yo", "tienes/tengo"}, 4);
    Question q6("\nWhat is the English word for 'Espantapajaros?'", {"Scarecrow", "Especially", "Espionage", "Dragon"}, 1);
    Question q7("\nWhat does 'El que mucho abarca, poco aprieta' mean?", {"To each their own", "All good things come to an end", "The one who embraces too much, grips little", "Early bird gets the worm"}, 3);
    Question q8("\nWhich phrase means 'To kill two birds with one stone' in Spanish?", {"Tocar madera", "Matar dos pajaros de un tiro", "Hazer de tripas corazón", "Agua pasada no mueve molino"}, 2);
    Question q9("\nWhat does 'más vale tarde que nunca' mean?", {"All good things come to those who wait", "Hindsight is 20/20", "Better late than never", "Ser pan comido"}, 3);
    Question q10("\nWhat is the English word for 'Desafortunadamente'?", {"Unfortunately", "Fortunately", "Disestablishmentarianism", "Destiny"}, 1);

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
