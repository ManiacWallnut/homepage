import os
import argparse
from PIL import Image


def resize_images(image1_path, image2_path):
    # Open the first image file
    image1 = Image.open(image1_path)

    # Get the size of the second image
    image2 = Image.open(image2_path)
    output_size = image2.size

    # Resize the first image to match the size of the second image
    resized_image1 = image1.resize(output_size)
    print(output_size)

    # Save the resized image back to the same folder
    resized_image1.save(image1_path)

    # Close the image files
    image1.close()
    image2.close()

# Create an argument parser
parser = argparse.ArgumentParser(description='Resize images.')
parser.add_argument('image1_path', type=str, help='Path to the first image.')
parser.add_argument('image2_path', type=str, help='Path to the second image.')

# Parse the command-line arguments
args = parser.parse_args()

# Specify the image paths
image1_path = args.image1_path
image2_path = args.image2_path

# Call the resize_images function
resize_images(image1_path, image2_path)
