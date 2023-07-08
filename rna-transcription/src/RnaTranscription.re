type dna =
  | A
  | C
  | G
  | T;

type rna =
  | A
  | C
  | G
  | U;

let toRna = (dna) => {
  let translate = (input: dna) => {
    switch (input) {
      | G => C
      | C => G
      | T => A
      | A => U
    };
  };

  List.map(translate, dna);
};
