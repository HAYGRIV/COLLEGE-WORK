function max_townums_range(x, y) {
    if (x >= 40 && x <= 60 && y >= 40 && y <= 60) {
      return x === y ? "Numbers are the same" : (x > y ? x : y);
    } else {
      return "Numbers don't fit in range";
    }
  }
console.log(max_townums_range(45, 60));
console.log(max_townums_range(25, 60));
console.log(max_townums_range(45, 80));
