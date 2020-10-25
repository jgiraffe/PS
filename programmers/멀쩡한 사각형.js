const gcd = (a, b) => b == 0 ? a : gcd(b, a % b);
const solution = (w, h) => w * h - (w + h - gcd(w, h));
