let isLeapYear = (year) => {
  switch ((year mod 4, year mod 100, year mod 400)) {
    | (0, 0, 0) => true
    | (0, 0, _) => false
    | (0, _, _) => true
    | _ => false
  }
};
