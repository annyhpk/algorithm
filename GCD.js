function GCD(a, b) {
  if (a % b == 0) return b;

  return GCD(b, a % b);
}

console.log(GCD(192, 162));
