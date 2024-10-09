#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SRC_LIB)
#  define MXG_EXPORT Q_DECL_EXPORT
# else
#  define MXG_EXPORT Q_DECL_IMPORT
# endif
#else
# define MXG_EXPORT
#endif

#define Q_PROPERTY_CREATE(TYPE, M)                          \
    Q_PROPERTY(TYPE p##M MEMBER m_p##M NOTIFY p##M##Changed) \
public:                                                     \
    Q_SIGNAL void p##M##Changed();                          \
    void set##M(TYPE M)                                     \
    {                                                       \
        m_p##M = M;                                          \
        Q_EMIT p##M##Changed();                             \
    }                                                       \
    TYPE get##M() const                                     \
    {                                                       \
        return m_p##M;                                       \
    }                                                       \
                                                            \
private:                                                    \
    TYPE m_p##M;

// Q_D Q_Q普通属性快速创建
#define Q_PROPERTY_CREATE_Q_H(TYPE, M)                                  \
    Q_PROPERTY(TYPE p##M READ get##M WRITE set##M NOTIFY p##M##Changed) \
public:                                                                 \
    Q_SIGNAL void p##M##Changed();                                      \
    void set##M(TYPE M);                                                \
    TYPE get##M() const;

// Q_D Q_Q指针变量快速创建
#define Q_PRIVATE_CREATE_Q_H(TYPE, M) \
public:                               \
    void set##M(TYPE M);              \
    TYPE get##M() const;

#define Q_PROPERTY_CREATE_Q_CPP(CLASS, TYPE, M) \
    void CLASS::set##M(TYPE M)                  \
    {                                           \
        Q_D(CLASS);                             \
        d->m_p##M = M;                           \
        Q_EMIT p##M##Changed();                 \
    }                                           \
    TYPE CLASS::get##M() const                  \
    {                                           \
        return d_ptr->m_p##M;                    \
    }

#define Q_PRIVATE_CREATE_Q_CPP(CLASS, TYPE, M) \
    void CLASS::set##M(TYPE M)                 \
    {                                          \
        Q_D(CLASS);                            \
        d->m_p##M = M;                          \
    }                                          \
    TYPE CLASS::get##M() const                 \
    {                                          \
        return d_ptr->m_p##M;                   \
    }

#define Q_PROPERTY_CREATE_D(TYPE, M) \
private:                             \
    TYPE m_p##M;

#define Q_PRIVATE_CREATE_D(TYPE, M) \
private:                            \
    TYPE m_p##M;

#define Q_PRIVATE_CREATE(TYPE, M) \
public:                           \
    void set##M(TYPE M)           \
    {                             \
        m_p##M = M;                \
    }                             \
    TYPE get##M() const           \
    {                             \
        return m_p##M;             \
    }                             \
                                  \
private:                          \
    TYPE m_p##M;

#define Q_Q_CREATE(CLASS)                               \
protected:                                              \
    CLASS(CLASS##Private& dd, CLASS* parent = nullptr); \
    QScopedPointer<CLASS##Private> d_ptr;               \
                                                        \
private:                                                \
    Q_DISABLE_COPY(CLASS)                               \
    Q_DECLARE_PRIVATE(CLASS);

#define Q_D_CREATE(CLASS) \
protected:                \
    CLASS* q_ptr;         \
                          \
private:                  \
    Q_DECLARE_PUBLIC(CLASS);
