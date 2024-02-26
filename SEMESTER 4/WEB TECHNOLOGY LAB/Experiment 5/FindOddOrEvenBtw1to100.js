function findOddAndEvenNumbers(num) {
    const oddNumbers = [];
    const evenNumbers = [];
    for (let i = 1; i <= num; i++) {
        if (i % 2 === 0) {
        evenNumbers.push(i);
        } else {
        oddNumbers.push(i);
        }
    }
    return { oddNumbers, evenNumbers };
}
const result = findOddAndEvenNumbers(100);
console.log('Odd numbers from 1 to 100:', result.oddNumbers);
console.log('Even numbers from 1 to 100:', result.evenNumbers);

