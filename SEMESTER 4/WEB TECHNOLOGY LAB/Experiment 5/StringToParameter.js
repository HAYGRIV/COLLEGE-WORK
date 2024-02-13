function capitalizeFirstLetterOfWords(str) {
    return str.split(' ').map(word => {
      return word.charAt(0).toUpperCase() + word.slice(1);
    }).join(' ');
}
console.log(capitalizeFirstLetterOfWords('hello world'));
console.log(capitalizeFirstLetterOfWords('the quick brown fox'));
