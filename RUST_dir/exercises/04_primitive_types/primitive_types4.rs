fn main() {
    // You can optionally experiment here.
}

#[cfg(test)]
mod tests {
    #[test]
    fn slice_out_of_array() {
        let a = [2, 3, 4];

        // TODO: Get a slice called `nice_slice` out of the array `a` so that the test passes.
        let nice_slice = a;

        assert_eq!([2, 3, 4], nice_slice);
    }
}
