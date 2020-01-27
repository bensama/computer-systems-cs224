A few BMP files for input and resulting files from applying the filters. A correct solutions should create an image that exactly matches, byte for byte, the provided filtered images.

  * **originals**: `orig-<name>.bmp`
  * **threshold**: `threshold-<name>.bmp`
  * **grayscale**: `grayscale-<name>.bmp`
  
The text file versions are `xxd` dumps of each image for testing and debugging. 

The files are ordered in increasing size as follows:

`orig-face.bmp`:

```
fileSizeInBytes = 1254
offsetFirstBytePixelArray = 54
width = 20
height = 20
``` 

`orig-byu.bmp`:

```
fileSizeInBytes = 480054
offsetFirstBytePixelArray = 54
width = 400
height = 400
```

`orig-fish.bmp`:

```
fileSizeInBytes = 151838
offsetFirstBytePixelArray = 138
width = 273
height = 185
```

`orig-cheese.bmp`:

```
fileSizeInBytes = 1267930
offsetFirstBytePixelArray = 54
width = 750
height = 563
```

`orig-horses.bmp`:

```
fileSizeInBytes = 2408470
offsetFirstBytePixelArray = 70
width = 1200
height = 669
```

# Comparing Files and Identifying Differences

The `diff` utility compares two files to see if and how they are different. For binary files, `diff` only reports the files as different and does not show where they differ. For text files, if the files are different, then `diff` additionally shows where the files differ. Here is the general way to use `diff`: `$ diff <left-file> <right-file>`. 

If there is a different in the binary file, the easiest way to find where the difference occurs is to use `xxd`: run `xxd` on both files and capture the output two different text files, and then compare the two text files with `diff`.

```
$ a.out < ./images/orig-fish.bmp > my-threshhold-fish.bmp 
$ xxd my-threshold-fish.bmp > my-threshold-fish.txt
$ diff ./images/threshold-fish.txt my-threshold-fish.txt 
3,4c3,4
< 00000020: 0000 0053 0700 120b 0000 120b 0000 0000  ...S............
< 00000030: 0000 0000 0000 0000 0000 0000 0000 0000  ................
---
> 00000020: 0000 0053 0700 120b 0000 120b 0000 0100  ...S............
> 00000030: 1800 0000 0000 0000 0000 0000 0000 0000  ................
$ 
```

Which, in this example, shows a difference at offset 46 decimal (2e): `Number of Colors in the Color Palette` in the DIB header. 