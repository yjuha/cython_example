# distutils: language = c++

from App cimport Myclass

cdef class PyMyclass:
    cdef Myclass*myclass

    def __cinit__(self, int var):
        self.myclass = new Myclass(var)

    def __dealloc__(self):
        del self.myclass

    def get_variable(self):
        return self.myclass.get_variable()
