
int rps_who_wins(char p1, char p2) {
  if (p1 == p2) {
    return 0;
  } else if (
      (p1 == 'r' && p2 == 'p') ||
      (p1 == 'p' && p2 == 's') ||
      (p1 == 's' && p2 == 'r')
    ) {
    return 2;
  } else {
    return 1;
  }
};
