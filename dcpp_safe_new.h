#pragma once

#include <exception>
#include <new>

namespace dcpp {
    // SafeNew 0 参数
    template<typename T>
    T* SafeNewEmpty(T*& out_ptr)
    {
        try
        {
            out_ptr = new T;
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // ================= 0 参数 =================
    template<typename T>
    T* SafeNewArray(T*& out_ptr, size_t n)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // SafeNew 0 参数
    template<typename T>
    T* SafeNew(T*& out_ptr)
    {
        try
        {
            out_ptr = new T();
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // ================= SafeDelete =================
    // 对应 SafeNew（带括号）
    template<typename T>
    void SafeDelete(T*& out_ptr)
    {
        if (out_ptr)
        {
            try
            {
                delete out_ptr;
            }
            catch (...)
            {
                // 捕获delete异常，保证安全
            }
            out_ptr = NULL;
        }
    }

    // ================= SafeDeleteArray =================
    // 对应 SafeNewArray
    template<typename T>
    void SafeDeleteArray(T*& out_ptr)
    {
        if (out_ptr)
        {
            try
            {
                delete[] out_ptr;
            }
            catch (...)
            {
                // 捕获delete[]异常，保证安全
            }
            out_ptr = NULL;
        }
    }


    // SafeNew 1 参数
    template<typename T, typename A1>
    T* SafeNew(T*& out_ptr, A1 a1)
    {
        try
        {
            out_ptr = new T(a1);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 2 参数
    template<typename T, typename A1, typename A2>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2)
    {
        try
        {
            out_ptr = new T(a1, a2);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 3 参数
    template<typename T, typename A1, typename A2, typename A3>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3)
    {
        try
        {
            out_ptr = new T(a1, a2, a3);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 4 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 5 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 6 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 7 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 8 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 9 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 10 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 11 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 12 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 13 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
    T* SafeNew(T*& out_ptr, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }
    // SafeNew 14 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 15 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 16 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 17 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 18 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 19 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18, typename A19>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18, A19 a19)
    {
        try
        {
            out_ptr = new T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }

    // SafeNew 20 参数
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18, typename A19,
        typename A20>
        T* SafeNew(T*& out_ptr,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7,
            A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18, A19 a19, A20 a20)
    {
        try
        {
            out_ptr = new T(
                a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
                a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
            if (!out_ptr)
                return out_ptr;
        }
        catch (...)
        {
            return out_ptr;
        }
        return out_ptr;
    }



    // ================= 1 参数 =================
    template<typename T, typename A1>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 2 参数 =================
    template<typename T, typename A1, typename A2>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 3 参数 =================
    template<typename T, typename A1, typename A2, typename A3>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 4 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3, A4 a4)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 5 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 6 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 7 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
    T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 8 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8>
        T* SafeNewArray(T*& out_ptr, size_t n, A1 a1, A2 a2, A3 a3, A4 a4,
            A5 a5, A6 a6, A7 a7, A8 a8)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 9 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 10 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 11 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 12 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 13 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 14 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 15 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 16 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 17 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 18 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 19 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18, typename A19>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18,
            A19 a19)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

    // ================= 20 参数 =================
    template<typename T, typename A1, typename A2, typename A3, typename A4,
        typename A5, typename A6, typename A7, typename A8, typename A9,
        typename A10, typename A11, typename A12, typename A13, typename A14,
        typename A15, typename A16, typename A17, typename A18, typename A19,
        typename A20>
        T* SafeNewArray(T*& out_ptr, size_t n,
            A1 a1, A2 a2, A3 a3, A4 a4, A5 a5,
            A6 a6, A7 a7, A8 a8, A9 a9, A10 a10,
            A11 a11, A12 a12, A13 a13, A14 a14,
            A15 a15, A16 a16, A17 a17, A18 a18, A19 a19,
            A20 a20)
    {
        out_ptr = NULL;
        try
        {
            out_ptr = new T[n];
            if (!out_ptr) return out_ptr;

            for (size_t i = 0; i < n; i++)
                out_ptr[i] = T(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
        }
        catch (...)
        {
            out_ptr = NULL;
        }
        return out_ptr;
    }

}


