from setuptools import Extension, setup
from Cython.Build import cythonize

setup(
    ext_modules = cythonize([ Extension("App", ["App.pyx"], libraries=["myapp"]) ])
)
