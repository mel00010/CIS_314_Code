include(UseLATEX)

# Note that normally CMakeLists.txt would not be considered an
# input to the document, but in this special case of documenting
# UseLATEX.cmake the contents of this file is actually included
# in the document.
add_latex_document(Solutions.tex)
add_file_to_package_from_binary_dir(Assignment4 Solutions.pdf)