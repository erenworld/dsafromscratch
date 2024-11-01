// Split the array into halves and merge them recursively
function mergeSort(array) {
    if (array.length == 1) return array;

    // Get the middle item of the array rounded down by creating a variable
    let middle = Math.floor(array.length / 2);
    let left = array.slice(0, middle);
    let right = array.slice(middle);

    return merge(mergeSort(left), mergeSort(right));
}

// Compare the arrays item by item and return the concatenated result
function merge(left, right) {
    let result = [];
    let j = 0;
    let k = 0;

    while (j < left.length && k < right.length) {
        if (left[j] < right[k]) {
            result.push(left[j]);
            j++;
        }
        else {
            result.push(right[k]);
            k++;
        }
    }
    return result.concat(left.slice(j)).concat(right.slice(k));
}

const arrayOfNumbers = [2, 5, 1, 3, 7, 4, 2, 3, 9, 8, 6, 3]
console.log(mergeSort(arrayOfNumbers)) // [1, 2, 2, 3, 3, 3, 4, 5, 6, 7, 8, 9]
