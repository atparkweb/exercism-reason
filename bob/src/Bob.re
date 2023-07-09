let question = message => {
  let message = String.trim(message);

  let len = String.length(message);

  if (len > 0) {
    String.get(message, len - 1) == '?'
  } else {
    false;
  }
}

let yelling = message => {
  let message = String.trim(message);
  let containsUppercase = str => Js.Re.test_(Js.Re.fromString("[A-Z]+"), str); 

  if (containsUppercase(message)) {
    message == String.uppercase_ascii(message);
  } else {
    false;
  }
}

let both = (predicate1, predicate2) => (input) => predicate1(input) && predicate2(input);

let yellingQuestion = both(yelling, question);

let silence = message => {
  String.trim(message) == "";
}

let hey = message => {
  if (silence(message)) {
    "Fine. Be that way!";
  } else if (yellingQuestion(message)) {
    "Calm down, I know what I'm doing!";
  } else if (question(message)) {
    "Sure.";
  } else if (yelling(message)) {
    "Whoa, chill out!";
  } else {
    "Whatever.";
  }
}
  
