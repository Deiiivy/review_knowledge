import os
import shutil
from ntpath import isfile

content_directory_Downloads = os.listdir('../../../../Downloads/')

extensions = []

for element in content_directory_Downloads:
    full_route = os.path.join('../../../../Downloads/', element)
    if os.path.isfile(full_route):
        nameBase, extension = os.path.splitext(element)
        if extension:
            extensions.append(extension)
            if extension == '.pdf':
                destination = '../../../../Downloads/PDFs'
                os.makedirs(destination, exist_ok=True)
                shutil.move(full_route, destination)
            elif extension == '.png':
                destination = '../../../../Downloads/PNGs'
                os.makedirs(destination, exist_ok=True)
                shutil.move(full_route, destination)
