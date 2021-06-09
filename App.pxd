cdef extern from "include/myclass.h":
    cdef cppclass Myclass:
        Myclass(int) except +
        int get_variable()

