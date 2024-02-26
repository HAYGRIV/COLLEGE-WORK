function findLongestWord(str) {
    const words = str.split(' ');
    let longestWord = '';
    for (const word of words) {
      if (word.length > longestWord.length) {
        longestWord = word;
      }
    }
    return longestWord;
  } 
  console.log(findLongestWord('The quick brown fox jumped over the lazy dog'));
  console.log(findLongestWord('This is a test string with several words'));
